#include<stdio.h>
#include<math.h>

int tobim(int num){
    int binnum=1,count=0;
    while(num>0){
        int remainder=num%2;;
        
        binnum+=remainder*pow(10,count);
        
        count++;
        num=num/2;
    }
    return binnum;
    
}


int main(){
    int num;
    printf("enter the number");
    scanf("%d",&num);
    printf("%d\n",tobim(num));
    int i=0;
    while(1){
        if(num & (1<<i)){
            break;
        }
        i++;
    }
    printf("%d",1<<i);

    return 0;

}

*
#include<time.h>
#include<stdlib.h>

#define elements 10
void setarray(int *array){  
    srand(time(NULL));
    for(size_t i=0;i<elements;i++){
        array[i]=(rand()%20)-10;
    }

}


void printarray(int *array){
    for(size_t i=0;i<elements;i++){
        printf("%d",array[i]);
    }

}


void samesign(int *array){
   int  flag=0;
    for(size_t i=0;i<elements;i++){
        if((array[i]>0&&array[i+1]>0)||(array[i]<0&&array[i+1]<0)){
            flag=1;
            printf("%d %d\n",array[i],array[i+1]);
        }
    }       
    if(!flag){
        printf("no same sign");
    }
    
}



int main(){
    int array[elements]={0};
    setarray(array);
    printarray(array);
    samesign(array);
    
    return 0;
}


*/


/*
int main(){
    int number;
    printf("enter the number;");
    scanf("%d",&number);
    int summ1=0;
    int summ2=0;
    
    for(int i=10;i<100;i++){
        int copy1=i;
        
       
        while(copy1>0){
            int remainder1=copy1%10;
            summ1+=remainder1;
            copy1/=10;
        }
       
        int j=i*number;
        int copy=j;
        
        
        while(copy>0){
            int remainder2=copy%10;
            summ2+=remainder2;
            copy/=10;
        }
    
        if(summ1==summ2){
            printf("%d\n",i);
        
                
        }
        summ1=0;
        summ2=0;
    }
        

return 0;

    
}

*/

/*

int main(){
    int a,b,c;
    printf("enter the a b c ");
    scanf("%d %d %d",&a,&b,&c);
    double discriminant=pow(b,2)-4*a*c;
    if (discriminant<0){
        printf("no roots");
    }else if(discriminant==0){
        double root=-b/2*a;
        printf("%lf is root of equation",root);
    }else{
        double root1=(-b-sqrt(discriminant))/2*a;
        double root2=(-b+sqrt(discriminant))/2*a;
        printf("two roots; %lf %lf",root1,root2);
    }

    
return 0;

/*
int main(){
    int number;
    printf("enter the number;");
    scanf("%d",&number);
    if(number>100){
        printf("invalid number");
    }else{
        int result=number*(number-1)*(number-2);
        printf("there are %d possibility for getting gold,silver,bronze medals",result);

    }
    return 0;
}
*/