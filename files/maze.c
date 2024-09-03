

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

#define SIZE 8
#define SIZEChar 5

// Function prototypes
void add_random_path(char maze[SIZE + 2][SIZE + 2][SIZEChar]);
void add_random_treasures(char maze[SIZE + 2][SIZE + 2][SIZEChar]);
void print_maze(char maze[SIZE + 2][SIZE + 2][SIZEChar]);
void init_maze(char maze[SIZE + 2][SIZE + 2][SIZEChar]);
void create_paths(char maze[SIZE + 2][SIZE + 2][SIZEChar]);
void generate_maze(char maze[SIZE + 2][SIZE + 2][SIZEChar]);
bool is_valid_move(char move, int player_row, int player_col);

int main()
{
    unsigned int seedNumber;
    puts("Enter a seed:");
    scanf("%u", &seedNumber);
    srand(seedNumber);

    char maze[SIZE + 2][SIZE + 2][SIZEChar];

    // Generate the maze
    generate_maze(maze);

    // Set player position and exit position
    int player_row = 1, player_col = 1;
    int exit_row = SIZE, exit_col = SIZE;

    // Game loop
    int score = 0;
    while (player_row != exit_row || player_col != exit_col)
    {
        print_maze(maze);

        char move;
        printf("Enter your move (w/a/s/d): ");
        scanf(" %c", &move);

        // Check if the move is valid
        if (!is_valid_move(move, player_row, player_col))
        {
            printf("Invalid move! Try again.\n");
            continue;
        }

        // Move the player
        switch (move)
        {
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

        // Check for treasure
        if (maze[player_row][player_col][1] == '*')
        {
            int treasure_value = maze[player_row][player_col][0] - '0';
            score += treasure_value;
            printf("You found a treasure worth %d points!\n", treasure_value);
        }

        // Deduct one point for each step
        score--;

        // Update player position in the maze
        maze[player_row][player_col][0] = 'P';

        

        // Check if the player has reached the exit
        if (player_row == exit_row && player_col == exit_col)
        {
            printf("Congratulations! You reached the exit with a score of %d.\n", score);
        }
    }

    return 0;
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

void init_maze(char maze[SIZE + 2][SIZE + 2][SIZEChar])
{
 
    for (int i = 0; i < SIZE + 2; i++)
    {
        for (int j = 0; j < SIZE + 2; j++)
        {
            strcpy(maze[i][j], " * ");
        }
    }
}

void create_paths(char maze[SIZE + 2][SIZE + 2][SIZEChar])
{
    // Implementation to create paths
    for (int i = 1; i <= SIZE; i++)
    {
        maze[0][i][0] = ' ';
        maze[i][0][0] = ' ';
        maze[SIZE + 1][i][0] = ' ';
        maze[i][SIZE + 1][0] = ' ';
    }
}

void generate_maze(char maze[SIZE + 2][SIZE + 2][SIZEChar])
{
    
    init_maze(maze);
    create_paths(maze);
    add_random_treasures(maze);
    add_random_path(maze);
}

bool is_valid_move(char move, int player_row, int player_col)
{
    
    switch (move)
    {
    case 'w':
        return player_row > 1;
    case 'a':
        return player_col > 1;
    case 's':
        return player_row < SIZE;
    case 'd':
        return player_col < SIZE;
    default:
        return false;
    }
}