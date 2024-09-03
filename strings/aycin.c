#include<stdio.h>
#include<time.h>
#include<stdlib.h>
/*
#define elements 6
void findmin(int *array){
    int minn=0;
    for(int i=0;i<elements;i++){
        if(array[i]<array[minn]){
            minn=i;
        }
    }
    int temp=array[0];
    array[0]=array[minn];
    array[minn]=temp;
}

void setarray(int *array){
    for(size_t i=0;i<elements;i++){
        printf("%zd.",i+1);
        scanf("%d",&array[i]);
    }
}

void printarray(int *array){
      for(size_t i=0;i<elements;i++){
        printf("%d\n",array[i]);
      }

}

int main(){
    int array[elements]={0};
    setarray(array);
    printarray(array);
    findmin(array);
    puts("------");
    printarray(array);
    return 0;
}

*/


#define elements 6
int findmin(int *array){
    int minn=0;
    for(size_t i=0;i<elements;i++){
        if(array[i]<array[minn]){
            minn=i;
        }
    
    }
    return array[minn];
}


void setarray(int *array){
    for(size_t i=0;i<elements;i++){
        printf("%zd.",i+1);
        scanf("%d",&array[i]);
    }
}

void printarray(int *array){
      for(size_t i=0;i<elements;i++){
        printf("%d\n",array[i]);
      }

}

int main(){
    int array[elements]={0};
    setarray(array);
    printarray(array);
    printf("min element is %d",findmin(array));


}