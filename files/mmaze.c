#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#define SIZE 4
#define SIZEChar 5

void print_maze(char maze[SIZE + 2][SIZE + 2][SIZEChar])
{
    
    for (int i = 0; i < SIZE + 2; i++)
    {
        for (int j = 0; j < SIZE + 2; j++)
        {
            printf("%s", maze[i][j]);
        }
        printf("\n");
    }
}

void init_maze(char maze[SIZE+2][SIZE+2][SIZEChar]){
    for(int i=0;i<SIZE+2;i++){
        for(int j=0;j<SIZE+2;j++){
            strcpy(maze[i][j]," * ");
        }

    }
}
void create_path(char maze[SIZE+2][SIZE+2][SIZEChar]){
    for (int i = 1; i <= SIZE; i++)
    {
        maze[0][i][0] = ' ';
        maze[i][0][0] = ' ';
        maze[SIZE + 1][i][0] = ' ';
        maze[i][SIZE + 1][0] = ' ';
    }
}


void add_random_path(char maze[SIZE + 2][SIZE + 2][SIZEChar])
{
    for(int i = 1; i < SIZE + 1; i++)
    {
        for(int j = 1; j < SIZE + 1; j++)
        {
            if(rand()%2 == 1) 
            {   
                char ch[SIZEChar] = "   ";
                strcpy(maze[i][j], ch);
            }
        }
    }
}

void add_random_treasures(char maze[SIZE + 2][SIZE + 2][SIZEChar])
{
    for(int i = 1; i < SIZE + 1; i++)
    {
        for(int j = 1; j < SIZE + 1; j++)
        {
            char ch1[SIZEChar]= "   ", ch2[SIZEChar] = " * ", arr[SIZEChar][SIZEChar] = {" 1 ", " 2 ", " 3 ", " 4 ", " 5 "};
            if(strcmp(maze[i][j], ch1) == 0 || strcmp(maze[i][j], ch2) == 0)
            {
                if(rand()%2 == 1){
                    strcpy(maze[i][j], arr[rand()%SIZEChar]);
                }
            }
        }
    }
}


void generate_maze(char maze[SIZE + 2][SIZE + 2][SIZEChar]){
    init_maze(maze);
    create_path(maze);
    add_random_treasures(maze);
    add_random_path(maze);
}

int main(){
    int seed;
    printf("enter the seed");
    scanf("%d",&seed);
    srand(seed);
    char maze[SIZE+2][SIZE+2][SIZEChar];
    generate_maze(maze);
    int player_col=0,player_row=0;
    int last_col=SIZE,last_row=SIZE;
    int score=0;
    while(player_col!=last_col ||player_row!=last_row){
        print_maze(maze);
        char move;
        printf("enter the move");
        scanf(" %c",&move);
        switch(move){
            case 'w':
                player_row--;
                break;
            case 'a':
                 player_col--;
                break;
            case 's':
                 player_row++;
                break;
            case 'd':
                player_col++;
                break;
           
        }
        maze[player_row][player_col][0] = 'P';

        
        if (player_row == last_row && player_col == last_col){
            
            printf("Congratulations! You reached the exit with a score of %d",score);
            
        }else if (maze[player_row][player_col][0] != ' ' && maze[player_row][player_col][0] != 'P'){
            score++;

        }

            
        
    }
}     

