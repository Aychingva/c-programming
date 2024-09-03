/*#include <stdio.h>
int main(){
    char name[20];
    unsigned int previous_meter,current_meter;
    float total=0;
    const unsigned int fixed=25;
    printf("enter the name;");
    fgets(name,20,stdin);
    printf("enter previous meter;");
    scanf("%u",&previous_meter);

    do
    {
       printf("enter the current meter;");
       scanf("%u",&current_meter);

    } while (current_meter<previous_meter);
    total=fixed+(current_meter-previous_meter)*0.2;
    printf("customer %s should pay %.2f$",name,total);
    return 0;
    
}*/



#include<stdio.h>
int main(){
    unsigned int number;
    printf("enter the number");
    scanf("%u",&number);
     if (number<=1){
        printf("this number is neither prime nor complex");
     }else{
        for (int i=2;i<number/2;i++){
            if(number%i==0){
                printf("this number is not prime");
                break;

            }

        printf("this number is prime");
        return 0;

            
        }
     }

}





/*
#include<stdio.h>
int main(){
    int type,quantity;
    const float charge_1=3.5,charge_2=5.5;
    printf("enter the type and quantity");
    scanf("%d %d",&type,&quantity);
    switch(type){
        case 1:
            printf("you should pay %.2f $",charge_1*quantity);
            break;
        case 2:
            printf("you should pay %.2f $",charge_2*quantity);
            break;
            

    }
    return 0;
    

}




*/












