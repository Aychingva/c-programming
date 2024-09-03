#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define elements 6
void setarray(int *array){
    srand(time(NULL));
    for(size_t i=0;i<elements;i++){
        array[i]=(rand()%21)-10;
        
    }
}

void printarray(int *array){
    for(size_t i=0;i<elements;i++){
        printf("%d  ",array[i]);
    }
}

void samesign(int *array){
    int flag=0;
    for(size_t i=0;i<elements-1;i++){
        if((array[i]>0 && array[i+1]>0)||(array[i]<0&&array[i+1]<0)){
            flag=1;
            printf("%d  %d\n",array[i],array[i+1]);
        }
    }if(!flag){
        printf("no same sign ");
    }
}

int main(){
    int arr[elements]={0};
    setarray(arr);
    printarray(arr);
    puts("\n----");
    samesign(arr);
}