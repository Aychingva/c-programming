#include<stdio.h>
#include<stdlib.h>
/*
int main(){
    int *ptr;
    int n;
    printf("enter the number");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    if(ptr==NULL){
        printf("memory not allocated");
    }else{
        printf("memory allocated");
        for(int i=0;i<n;i++){
            ptr[i]=i+1;
        }
        for(int i=0;i<n;i++){
            printf("%d",ptr[i]);
        }
    }
return 0;
    
}
*/


/*
int main(){
    int *ptr;
    int n;
    printf("enter the number;");
    scanf("%d",&n);
    ptr=&n;
    printf("%d",*ptr);
    ptr=(int*)calloc(n,sizeof(int));
    if(ptr==NULL){
        printf("memory not allocaated;");
    }else{
        printf("memory allocated;");
        for(int i=0;i<n;i++){
            ptr[i]=rand()%10;
            printf("%d",ptr[i]);
        }
        printf("enter the number;");
        scanf("%d",&n);
        ptr=(int*)realloc(ptr,n*sizeof(int));
        for(int i=0;i<n;i++){
            ptr[i]=rand()%10;
            printf("%d",ptr[i]);
        }
        free(ptr);
        return 0;
        
    }
}


*/
/*
#include<time.h>
int main(){
    float *ptr;
    int n;
    float summ=0;
    int count=0;
    printf("enter the number");
    scanf("%d",&n);
    ptr=(float*)malloc(n*sizeof(int));
    if(ptr==NULL){
        printf("memory not allocated;");
    }else{
        printf("memory allocated;");
        for(int i=0;i<n;i++){
            ptr[i]=((float)rand()/RAND_MAX)*20-10;
            summ+=ptr[i];
            count++;
            printf("%4lf",ptr[i]);

        }
        float average=summ/count;
        printf("average value %lf",average);
    }
}
*/



/*
#include<time.h>
int *setarray(int size){
    int *arr=(int*)calloc(size,sizeof(int));
        for(int i=0;i<size;i++){
            arr[i]=rand()%10;
        }
    
    return arr;
}


int main(){
    srand(time(NULL));
    int *vector1=setarray(5);
    int *vector2=setarray(10);
    puts(" vector 1");
    for(int i=0;i<5;i++){
        printf("%d ",vector1[i]);
        
    }
    puts(" ");

    puts(" vector 2");
    for(int i=0;i<10;i++){
        printf("%d ",vector2[i]);
        
    }
    puts(" ");
    vector2=realloc(vector2,15);
    puts("modified vector;");
    puts(" ");
    for(int i=10;i<15;i++){
        vector2[i]=vector1[i-10];
        

    }
    for(int i=0;i<15;i++){
        printf("%d ",vector2[i]);
    }

}
*/
/*
#include<time.h>
int *setarray(int size){
    int *arr=(int*)calloc(size,sizeof(int));
  
    for(int i=0;i<size;i++){
        arr[i]=rand()%10;
    }
    return arr;
}



int main(){
    srand(time(NULL));
    int *vector=setarray(5);
    int max=0;
    puts(" vector 1;");
    for(int i=0;i<5;i++){
        printf("%d",vector[i]);
    }
    puts(" ");
    for(int i=0;i<5;i++){
        if(vector[i]>vector[max]){
            max=i;
        }
    }
    printf("%d",vector[max]);
    
}

*/


/*
#include<string.h>
#include<time.h>

int *setarray(int size){
    int *arr=(int*)calloc(size,sizeof(int));
    for(int i=0;i<size;i++){
        arr[i]=rand()%10;
    }
    return arr;
}

void printarray(int *arr,int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}



int main(){
    srand(time( NULL));
    int *vector=setarray(5);
    int *vector2=setarray(10);
    int *vector3=(int*)calloc(15,sizeof(int));
    puts(" \nvector 1");
    printarray(vector,5);
    puts("\n vector 2");
    printarray(vector2,10);
    memcpy(vector3,vector,5*sizeof(int));
    memcpy(vector3+5,vector2,10*sizeof(int));
    puts(" \nvector 3;");
    printarray(vector3,15);
    free(vector3);
    vector3=NULL;
    return 0;

    
}

*/


/*
//task 4
#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int **setarray(int row,int col){
    int **arr=(int**)malloc(col*row*sizeof(int*));
    for(int i=0;i<row;i++){
        arr[i]=(int*)malloc(col*sizeof(int));
    }
    return arr;
}



void printarray(int **arr,int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%4d",arr[i][j]);
        }
        printf("\n");
    }
}


void shape(int **arr,int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(i==0||i%2==0||j==0){
                arr[i][j]=0;
            }
           
        }

    }
}



int main(){
    srand(time(NULL));
    int row;
    int col;
    printf("enter the row");
    scanf("%d",&row);
    printf("enter the col");
    scanf("%d",&col);
    int **arr=setarray(row,col);
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            arr[i][j]=rand()%10;
        }
    }
printf("original array\n;");
printarray(arr,row,col);
puts(" ------- ");
shape(arr,row,col);
printarray(arr,row,col);
for(int i=0;i<row;i++){
    
    free(arr[i]);
    arr[i]=NULL;
    
}
free(arr);
arr=NULL;
return 0;
}
*/

#include<string.h>
/*
int main(){
    char *str1;
    char *str2;
    str1=(char*)malloc(16);
    strcpy(str1,"01234567890a");
    printf(" string 1 value %p [%s]\n",str1,str1);
    str2=realloc(str1,8);
    str2[8]='\0';
    printf(" string 2 value %p [%s]\n",str2,str2);
    return 0;
}
*/