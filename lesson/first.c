#include<stdio.h>/*
int main(){
    int h1,h2,m1,m2,difference_h,difference_m;
    printf("enter the first hour and minute;");
    scanf("%d %d",&h1,&m1);

    printf("enter the second hour and minute;");
    scanf("%d %d",&h2,&m2);

    if(h1<h2){
        if(m1<m2){
        difference_h=h2-h1;
        difference_m=m2-m1;

        }else{
            difference_h=h2-h1-1;
            difference_m=60-(m1-m2);
        }


    

    }else{
        if (m1<m2){
            difference_h=(24-h1)+h2;
            difference_m=m2-m1;
        }else{
            difference_h=(24-h1)+h2-1;
            difference_m=60-(m1-m2);
           
        }

    }
    printf("difference between time %d %d",difference_h,difference_m);
    return 0;
       
        
    
        
    


}
*/



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

/*
>




