//task 4

#include<stdio.h>
#include<math.h>
int main(){
    int birthday,birthmonth,birthyear,age;
    printf("enter the your birthday:");
    scanf("%d %d %d",&birthday,&birthmonth,&birthyear);
    int currentday,currentmonth,currentyear;
    printf("enter the current day:");
    scanf("%d %d %d",&currentday,&currentmonth,&currentyear);
    if(birthmonth<currentmonth){
         age=currentyear-birthyear;
       

    }else{
        age=currentyear-birthyear-1;
       
    }
    printf("your age is %d\n",age);

    int maxxheartrate=220-age;
     int minntargetrate=maxxheartrate*0.5;
     int maxxtargetrate=maxxheartrate*0.85;
     printf("Maxium heart rate is %d beats per minute\n",maxxheartrate);
     printf("Target heart rate is %d-%d beats per minute\n",minntargetrate,maxxtargetrate);

    return 0;
}





//task 6
/*


# include <stdio.h>
int main(){
    double interest,amount,interest_rate;
    printf("enter the amount:");
    scanf("%lf",&amount);
    
    if (amount<5000){
        interest_rate=40;

    }else if(amount<10000){
        interest_rate=5;
        
    }else if (amount<20000){
        interest_rate=6;
        

    }else {
        interest_rate=7;
        
    }
    interest=(interest_rate/100)*amount;
    printf("interest rate is %lf ,earned extra %.2f $",interest_rate,interest);
    
   
    return 0;
    
}

*/

//task 7
/*

#include<stdio.h>
#include<string.h>
int main(){
    int age;
    char graduate[20],university[20],major[20];
    printf("Are you graduate ?: ");
    scanf("%s",&graduate);

    
    if (strcmp(graduate, "yes") == 0) {  
        printf("enter your age;");
        scanf("%d",&age);

        printf("enter the university;");
        scanf("%s", &university);

        printf("enter the major;");
        scanf("%s",&major);
 
        if ((age>25 && strcmp(major,"chemistry")==0 && strcmp(university,"Yale")==0) ||
            (strcmp(major,"chemistry")==0 && strcmp(university,"Yale")==0) ||
            (age<=28 && strcmp(major,"economics")==0 && strcmp(university,"Harvard")==0) ||
            (age>25 && strcmp(major,"chemistry")==0 && strcmp(university,"Yale")==0)){
            printf("congratulation ! you are selected to the interview");
            }else {
                printf("sorry,you are not selected to the interview");
            }


    } else {
        printf("sorry,only graduate are eligible to the interview");
    }

    return 0;
    

    
    
}

*/



//task 10

/*

#include<stdio.h>
int main(){
    int num1,dem1,num2,dem2,share;
    printf("enter the first fraction:");
    scanf("%d %d",&num1,&dem1);
    printf("enter the second fraction:");
    scanf("%d %d",&num2,&dem2);
   
    int numerator=num1*dem2+num2*dem1;
    int deminator=dem1*dem2;
    printf("sum of the fractions is %d/%d\n",numerator,deminator);
    if (numerator>deminator){
       int  numerator2=numerator%deminator;
       int  deminator2=deminator;
        share=numerator/deminator;
        printf("sum of fractions is %d %d/%d",share,numerator2,deminator2);
        


        
    }
 

    

   


}

*/













