#include<stdio.h>
#include<math.h>/*

//task 1

int main(){
    float hours,rate,salary;
    
    while(1){
    
        printf("enter the hours;\n");
         scanf("%f",&hours);
         printf("enter the rate;\n");
         scanf("%f",&rate);
         if(hours==-1){
            break;
         }
        if(hours<=40){
            salary=hours*rate;
            printf("employee salary is %f",salary);
           

        }else{
            salary=(hours*rate)+(rate/2);
            printf("employee salary is %f",salary);
           
            
    }
}


//task 2
int main(){
    int copy,sum,count;
   
    for(int num=1;num<1000;num++){
        copy=num;
        sum=0;
        count=0;
        while(copy>0){
            copy=copy/10;
            count+=1;
        }
        copy=num;
        //int countofdigit=(int) log10(num)+1;
        while(copy>0){
            sum+=pow(copy%10,count);
            copy=copy/10;
            
        }
        if(num==sum) {
            printf(" %d number is armstrong",num);
        

        }
            
    }
            
        //}
        return 0;
    
}

*/





//task3
/*

int main(){
    
    for(int i=1;i<100;i++){
        int isprime=1;
        
        for (int j=2;j<=i/2;j++){
            if (i%j==0){
                isprime=0;
                
                
                break;
                
                
            }
            
        }
        if(isprime){
            printf("%d\n",i);
        }

        
        
        

    }
    return 0;
}
*/



//task 4
/*

int main(){
    int product_number;
    float retail_price;
    int quantity;
    float total=0;
    
    int times=0;

    while(times<3){
        printf("enter the quantity;");
        scanf("%d",&quantity);
        printf("enter the product:");
        scanf("%d",&product_number);
        switch(product_number){
        case 1:
            retail_price=2.98;
            break;
        case 2:
            retail_price=4.50;
            break;
        case 3:
            retail_price=9.98;
            break;
        case 4:
            retail_price=4.49;
            break;
        case 5:
            retail_price=6.87;
            break;
        }
        times++;
        total+=retail_price*quantity;
    }
    
    printf("total amount is %f",total);
    return 0;


}



*/

//task 5
/*
int main(){
    int n_terms;
    double pi=0;
    const int sign =-1;
    printf("enter the n :");
    scanf("%d",&n_terms);
    for(int i=1;i<=n_terms;i++){
        
        pi+=(pow(sign,i+1))*4/(2*i-1);



    }
    printf("value is %f",pi);
    return 0;
}
*/


//task 6
/*

int main(){
    int number;
    double e=1.0;

    double factorial=1.0;
    printf("enter the number;");
    scanf("%d",&number);
    for (int i=1;i<number;i++){
        factorial*=i;
      
        e+=1.0/factorial;
    }
    printf("value %2.lf",e);
    return 0;

}


*/





/*
//task8

int main(){
    int number, digit;
    printf("enter the num and digits;");
    scanf("%d %d",&number,&digit);
     int prevdigit=0;
     int flag=0;
     int count=0;
     while(number!=0){
        int lastdigit=number%10;
        if(lastdigit==digit){
            flag=1;
        }
        if(prevdigit==lastdigit){
            count++;
        }
        prevdigit=lastdigit;
        number=number/10;
     }
     if(flag){
        printf("digit exists in number\n");
     }else{
        printf("digit doesnt exist in number\n");
     }
     if(count>=1){
        printf("sequential number exists\n");

     }else{
        printf("sequential number doenst exist in number\n");
     }

     
    return 0;
}

*/

/*
//task 9
#include<math.h>
int main(){
    int number,copy;
    printf("enter the number");
    scanf("%d",&number);
    int summ=0;

    copy=number;
    int count=(int)log10(number)+1;
    while(copy>0){
        
       int digit=copy%10;
       summ+=pow(10,count-1)*digit;
       count-=1;
       copy=copy/10;
       if(count<0){
        break;
       }

    }
    if(number==summ){
        printf("this number is polindrom");
        
    }else{
        printf("it is not polyndrom;");
    }
    return 0;
}



//task9
/*

int main(){
    int number;
    int reversed=0;
    
    printf("enter the number;");
    scanf("%d",&number);
    int copy=number;
    while(copy>0){
        int digit=copy%10;
        reversed=reversed*10+digit;
        copy=copy/10;

    }
    if(reversed==number){
        printf("this number is polindrom;");
    }else{
        printf("this number is not polindrom;");
    }
    return 0;


}
*/

int main(){
    int kg1,kg2,q1,q2;
    printf("enter the kg1 and q1;");
    scanf("%d %d",&kg1,&q1);
    printf("enter the kg2 and q2;");
    scanf("%d %d",&kg2,&q2);
    int sumkg=0;
    int sumq=0;
    sumkg=kg1+kg2;

    

}




