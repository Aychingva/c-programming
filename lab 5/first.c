#include<stdio.h>
/*
int main(){
    int num1=10,num2=20,num3=30;
    int *Ptrnum1=NULL;
    Ptrnum1=&num1;
    printf("the  adress of num1 :%p\n",&num1);
    printf("the  adress of num2 :%p\n",&num2);
    return 0;
}*/



/*
int main(){
    
    int num1,num2;
    int *ptrf=&num1,*ptrs=&num2;
    
    printf("enter the number1 and number2");
    scanf("%d %d",&num1,&num2);
    int sum=*ptrf+*ptrs;
    printf("the sum;%d",sum);
    return 0;

    

    
}


*/

/*
int main(){
    int num1,num2;
    int *ptrf=&num1,*ptrs=&num2;
    printf("enter the number1 and number2");
    scanf("%d %d",&num1,&num2);
    if(*ptrf>*ptrs){
        printf("num1 is greater than num2");

    }else{
        printf("num2 is greater than num1");
    }
    return 0;


}

*/


/*
int main(){
    int copy;
    int a,b,c;
    int nums[]={5,6,7};
    for(size_t i=0; i<3; i++){
        printf("m adress; %p\n",&nums[i]);

    }
    for(int *ptr=nums;ptr<nums+3;ptr++){
        printf("m adress %p\n",ptr);
        copy=*ptr;
        
    }
    return 0;
}

*/


//task 1
/*

int main(){
    int *ptr;
    int x;

    ptr=&x;
    *ptr=4;



    printf("x=%d\n",x);
    printf("*ptr=%d\n",*ptr);


    *ptr+=5;
    printf("x=%d\n",x);
    printf("*ptr=%d\n",*ptr);


    return 0;

}
*/


//task 2
/*

int main(){
    int num1,num2;
    int *ptrf=&num1,*ptrs=&num2;
    printf("enter the num1 and num2;");
    scanf("%d %d",&num1,&num2);
    int sum=*ptrf+*ptrs;
    printf("the sum of numbers %d",sum);
    return 0;



}

*/

//task 3
/*
int main(){
    int num1,num2;
    int *ptrf=&num1,*ptrs=&num2;
    printf("enter the num1 and num2;");
    scanf("%d %d",&num1,&num2);
    if (*ptrf>*ptrs){
        printf("num1 is greater than num2");
    }else{
        printf("num2 is greater than num1");
    }
    return 0;

}
*/



//task4
/*
int main(){
    int copy;
    int *ptr;
    int nums[]={5,6,7};
    for(int *ptr=nums;ptr<=nums+3;ptr++){

        copy=*ptr;
        *ptr=*(ptr+1);
        *(ptr+1)=copy;
        printf("%p\n",*ptr);
        
    
    }
    return 0;


}
    
*/



//task 5

int main(){
    int num;
    printf("enter the number");
    scanf("%d",&num);
    int *ptr;
    ptr=&num;
    int factorial=1;
    for(int i=1;i<=*ptr;i++){
        factorial*=i;


    }
    printf("factorial %d",factorial);
    return 0;
}





















