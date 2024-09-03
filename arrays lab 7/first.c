#include <stdio.h>
/*
#define Max 4
int main(){
    int myarray[Max]={11,33,22,55};
    printf("memmory address: %p\n",&myarray);
    puts("inside array;");
    for(size_t idx=0 ;idx<Max ;idx++){
        printf("memory adress %p value;%d\n",&myarray[idx],myarray[idx]);
    }
    printf("memory space;%d\n",sizeof(myarray));
    printf("memory space;%d\n",sizeof(myarray)/sizeof(myarray[0]));
    return 0;
}
*/

/*
#define Maxelement 5
#include<stdlib.h>
#include<time.h>

void setarrayrand(double*array){
    srand(time(NULL));
    for  (size_t i=0;i<Maxelement;i++){
        array[i] = (rand()/(double)RAND_MAX) * 20 - 10 ;


    }
    
    
}

void setarray(double *array){
    puts("enter the double values;");
    for(size_t i=0;i<Maxelement;i++){
        printf("%zd.",i+1);
        scanf("%lf",&array[i]);
    }
}


void printarray (double *array){
    for(size_t i=0;i<Maxelement;i++){
        
        printf("%.5lf     ",*(array+i));
    }
    
    
}


void swap(double *num1,double *num2){
    double temp=*num1;
    *num1=*num2;
    *num2=temp;
}


void reverse(double *array){
    for(size_t  i=0;i<Maxelement/2;i++){
        swap(&array[i],&array[Maxelement-i-1]);
        
    }

}


int main(){
    double arr[Maxelement]={0.0};
    setarrayrand(arr);
    puts("\n before;");
    printarray(arr);

    
    reverse(arr);
    puts("\n after;");
    printarray(arr);

   
    return 0;
}

*/


//tassk 1
/*
#define elements 10
#include<stdlib.h>
#include<time.h>

void setarray(int *array){
    srand(time(NULL));
    for(size_t i=0;i<elements;i++){
        array[i]=(rand()%21)-10;

    }
}



void printarray(int *array){
    for(size_t i=0;i<elements;i++){
        printf("%d  ",*(array+i));

    }
}


void samesign(int*array){
    int flag=0;
    for(size_t i=0;i<elements-1;i++){
        if((array[i]>0 && array[i+1]>0)||array[i]<0 &&array[i+1]<0){
            flag=1;

        
            printf("%d %d\n",array[i],array[i+1]);
        }

    }if(!flag){
        printf("no same sign;");
    }

}



int main(){
    int arr[elements]={0};
    setarray(arr);
    printarray(arr);
    samesign(arr);
    
    return 0;
}
*/





//task 3
/*
#define elements 10
#include<stdlib.h>
#include<time.h>
#include<math.h>
void setarray(int *array){
     srand(time(NULL));
    for(size_t i =0;i<elements;i++){
       
        array[i]=rand()%21-10;

    }
}


void printarray(int *array){
     for(size_t i =0;i<elements;i++){
        printf("%d ",*(array+i));
     }

}

float sumarray(int *array){
    int summ=0;
    for(size_t i=0;i<elements;i++){
        summ+=array[i];
    }
    float u=summ/sizeof(*array);
    float numerator=0;
    for(size_t i=0;i<elements;i++){
        numerator+=pow((array[i]-u),2);

    }
return numerator;
       
        
    
    
}

int main(){
    int arr[elements]={0};
    setarray(arr);
    printarray(arr);
    puts("\n");
    float numerator=sumarray(arr);
    float b=sqrt(numerator/elements);
    printf("result is %f",b);
    return 0;


*/



//task 4
/*

#define elements 10
void selectionsort(int *array){
    for(size_t i=0;i<elements-1/2;i++){
       int  minindex=i;
       for(size_t j=i+1;j<elements/2;j++){
        if(array[j]<array[minindex]){
            minindex=j;
        }
       }

       int temp=array[i];
       array[i]=array[minindex];
       array[minindex]=temp;
    
    }
}



void selectionsort2(int*array){
    for(size_t i=elements/2;i<elements-1;i++){
       int  minindex=i;
       for(size_t j=i+1;j<elements;j++){
        if(array[j]<array[minindex]){
            minindex=j;
        }
       }
       int temp=array[i];
       array[i]=array[minindex];
       array[minindex]=temp;
    }
}



void setarray(int *array){
    for(size_t i=0;i<elements;i++){
        printf("%zd.",i+1);
        scanf("%d",&array[i]);
    }
}

void printarray(int *array){
    for(size_t i=0;i<elements;i++){
        printf("%d    ",array[i]);
    }
}


int main(){
    int arr[elements]={0};
    setarray(arr);
    printarray(arr);
    puts("-------");
    selectionsort(arr);
    selectionsort2(arr);
    printarray(arr);
    return 0;
}

*/












//task 7
/*
#define elements 6

void findmin(int *array){
    int minn=0;
    for(size_t i=0;i<elements;i++){
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
        printf("%d    ",array[i]);
    }
}


int main(){
    int arr[elements]={0};
    setarray(arr);
    printarray(arr);
    findmin(arr);
    puts("-----");
    printarray(arr);

   return 0;

}
*/

/*
//task8
#define elements 6
int oddnumbers(int *array){
    for(size_t i=0;i<elements;i++){
        if(array[i]%2==1){
            printf("odd numbers %d\n",array[i]);
        }
    }
}




void setarray(int *array){
    for(size_t i=0;i<elements;i++){
        printf("%zd.",i+1);
        scanf("%d",&array[i]);
    }
}

void printarray(int *array){
    for(size_t i=0;i<elements;i++){
        printf("%d    ",array[i]);
    }
}



int main(){
    int arr[elements]={0};
    setarray(arr);
    printarray(arr);
    puts("-----");
    int odd=oddnumbers(arr);
    printf("%d",odd);
    

   return 0;

}


*/







//task 9
/*
#define elements 6
int findmin(int *array){
   int min=0;
   for(size_t i=0;i<elements;i++){
    if(array[i]<array[min]){
        min=i;
    }
    }       
   return array[min];
}




void setarray(int *array){
    for(size_t i=0;i<elements;i++){
        printf("%zd.",i+1);
        scanf("%d",&array[i]);
    }
}

void printarray(int *array){
    for(size_t i=0;i<elements;i++){
        printf("%d    ",array[i]);
    }
}





int main(){
    int arr[elements]={0};
    setarray(arr);
    printarray(arr);
    puts("-----");

    printf("%d",findmin(arr));
    
    

   return 0;

}

*/



//task 10
/*

#define elements 6


int summ(int *array){
    int summ=0;
     for(size_t i=0;i<elements;i++){
        summ+=array[i];
     }
    return summ;

}


void setarray(int *array){
    for(size_t i=0;i<elements;i++){
        printf("%zd.",i+1);
        scanf("%d",&array[i]);
    }
}

void printarray(int *array){
    for(size_t i=0;i<elements;i++){
        printf("%d    ",array[i]);
    }
}





int main(){
    int arr[elements]={0};
    setarray(arr);
    printarray(arr);
    puts("-----");
    printf("summ is %d",summ(arr));

    return 0;
}



*/

//task 6
/*
#define elements 99
#include<stdlib.h>
#include<time.h>


void random(int *array){
    srand(time(NULL));
    for(size_t i=0;i<elements;i++){
        array[i]=(rand()%9+1);
    }
}


void printarray(int *array){
    for(size_t i=0;i<elements;i++){
         if(i!=0 && i%20==0){
            puts("\n------");
        }
        printf("%d    ",array[i]);
        
    }
}

float median(int *array){
    if(elements%2==0){
        int middle1=array[elements/2-1];
        int middle2=array[elements/2];
        return (float)(middle1+middle2)/2.0;
    }else{
        return array[(elements-1)/2];
    }
}




 int mode(int *array){
    int c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0;
    for(size_t i=0;i<elements;i++)
    {
        switch (array[i])
        {
        case 1:
           c1++;
            break;
        case 2:
           c2++;
            break;
        case 3:
           c3++;
            break;
        case 4:
           c4++;
            break;
        case 5:
           c5++;
            break;
        case 6:
           c6++;
            break;
        case 7:
           c7++;
            break;
        case 8:
           c8++;
            break;
        case 9:
           c9++;
            break;
       
        }

    }
    int lst[9] = {c1,c2,c3,c4,c5,c6,c7,c8,c9};
    int maxindex=0;
    int mode=0;
    for(size_t i=0;i<9;i++){
        if(lst[i]>lst[maxindex]){
            maxindex=i;
            mode=maxindex+1;
        }
    
    }
    for(size_t i=0;i<9;i++){
        printf("%d  %d\t\t",i+1,lst[i]);
        for(int j=0;j<lst[i];j++){
            printf("*");
        }
        printf("\n");
            
        
        
    }


    printf("mode is %d and times %d ",mode,maxindex);

}


float mean(int *array){
    int summ=0;
    for(size_t i=0;i<elements;i++){
        summ+=array[i];


    }
   float mean=summ/99.0;
    printf("%d/99 is %f mean",summ,mean);
}


void selectionsort(int*array){
    int min_index=0;
    for(size_t i=0;i<elements-1;i++){
        min_index=i;
        for(size_t j=i+1;j<elements;j++){
            if(array[min_index]>array[j]){
                 min_index=j;

            }
           
        }
        int temp=array[i];
        array[i]=array[min_index];
        array[min_index]=temp;
    }
}



int main(){
    int arr[elements]={0};
    //int c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0;
    int lst[9]={0};
    random(arr);
    printarray(arr);
    printf("%f",mean(arr));
    puts("------\n");
    selectionsort(arr);
    printarray(arr);
    printf("median is %f\n",median(arr));
    printf("mode is %d\n",mode(arr));
    
  
    return 0;



}
*/

//task 5
#include<time.h>
#include<stdlib.h>
#define N 3
#define M 2
#define P 3
void fillarr(int row,int col,int arr[row][col]);
void printarr(int row,int col,int arr[row][col]);
void dotproduct(int row,int col1,int col2,int arr1[row][col1],int arr2[col1][col2],int arr3[row][col2]);






int main(){
    srand(time(NULL));
    int mat1[N][M],mat2[M][P],mat3[N][P];
   
    fillarr(N,M,mat1);
    printarr(N,M,mat1);
    puts("\n");

    fillarr(M,P,mat2);
    printarr(M,P,mat2);

    

    dotproduct(N,M,P,mat1,mat2,mat3);

    printarr(N,P,mat3);
    return 0;






}

void fillarr(int row,int col,int arr[row][col]){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            arr[i][j]=rand()%5;

        }
    }
}

void printarr(int row,int col,int arr[row][col]){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%4d",arr[i][j]);
        }
        puts("");
    }
}




void dotproduct(int row,int col1,int col2,int arr1[row][col1],int arr2[col1][col2],int arr3[row][col2]){
    for(int i=0;i<row;i++){
        for(int j=0;j<col2;j++){
            for(int k=0;k<col1;k++){
                arr3[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }

}


