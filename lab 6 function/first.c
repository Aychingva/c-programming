#include<stdio.h>
#include<math.h>
//task1
/*
int evenorodd(int number){
    if (number%2==0){
            return 1;
        }else{
            return 0;
        }
    
}



int main(){
    int number;
    printf("enter the number");
    scanf("%d",&number);
    int result=evenorodd(number);
    if(result==1){
        printf("it is even number");
    }else{
       printf("it is odd number");
    }
    return 0; 
}

*/




//task2
/*
#include<stdbool.h>

bool isperfect(int number){
    int summ=0;
    for(int i=1;i<number;i++){
        if(number%i==0){
            summ+=i;
            
        }
   
    }
    return number==summ ? true:false;
}


int main(){
    int number;
    for(int n=1;n<1000;n++){
        if(isperfect(n)){
            printf("%d perfect number\n",n);
            

        }
    }
    return 0;
}



*/
//task 3
/*

int qualitypoints(float average){
    
    if(average>90.0 &&average<=100.0){
        return 4;
    }
    else if(average>80.0 &&average<=89.0){
    return 3;}
    else if(average>70.0 &&average<=79.0){
        return 2;
    }
    else if(average>60.0 &&average<=69.0){
        return 1;
    }
    else if(average<60.0){
        return 0;
    }

}


int main(){
    float average;
    printf("enter the average;");
    scanf("%f",&average);
    printf("%d",qualitypoints(average));
    return 0;

}




*/










//task 7
/*
float function(int x, int y){
    float total=pow(x,2)+sin(x*y)-pow(y,2);
    return total;

}

int main(){
   int x,y;
    printf("enter the x and y");
    scanf("%d %d",&x,&y);
    printf("f(x)-->%.4f",function(x,y));
    return 0;
}
*/ 


//task 8
/*
double functA(double x){
    return pow(x,3)+2*pow(x,2)-3;
}

double functC(double x){
    double z=(3*x);
    double y=log(z);

    return sin(x)+sqrt(y+3*exp(x));
}


int main(){
    double a,b,h;
    double x;
    printf("enter the a,b,h;");
    scanf("%lf %lf %lf",&a,&b,&h);
    if(a>b){
        printf("invalid numbers\n");
        return 1;
    }
  
    
    for(x=a; x<=b; x+=h){
        printf("functionA-->%lf %lf\n",x,functA(x));
        printf("functionC-->%lf %lf\n",x,functC(x));

        
    }
    return 0;
    
}


*/


//task 9
/*

int decimaltobinary(int x){
    int n=0;
    int summ=0;
    while(x>0){
        int digit=x%10;
        summ+=pow(10,n)*digit;
        n=n+1;
    }
    return summ;

}

int main(){
    int x;
    printf("enter the x ;");
    scanf("%d",&x);
    printf("decimal to binart--> %d-->%d",x,decimaltobinary( x));
    return 0;
}


*/











//task10
/*

int function(int a,int b,int c){
    if(a,b,c<=0){
        return 0;
    }
    if(a>b+c||b>a+c||c>a+b){
        return 0;
    }
    if(a!=b!=c){
        return 1;
    }
    if(a==b||b==c||a==c){
        return 2;
    }
    if(a==b==c){
        return 3;
    }
}

int main(){
    int a,b,c;
    printf("enter the a b c ;");
    scanf("%d %d %d",&a,&b,&c);
   int result=function(a,b,c);
if(result==0){
    printf("not a valid triangle");
}
if(result==1){
    printf("scale triangle");
}
if(result==2){
    printf("two sides are equal");
}
if(result==3){
    printf("three sides are equal");
}
return 0;
}

*/



//task11
/*
int function(int a,int b,int c){
    if(pow(a,2)==pow(b,2)+pow(c,2)||pow(b,2)==pow(c,2)+pow(a,2)|pow(c,2)==pow(b,2)+pow(a,2)){
        return 1;

    }else{
        return 0;
    }
}

int main(){
    int a,b,c;
    printf("enter the a b c ;");
    scanf("%d %d %d",&a,&b,&c);
    int result=function(a,b,c);
    if(result==1){
        printf("right triangle");
    }else{
        printf("it is not right triangle");
    }
    return 0;

}

*/


//rask4-5
/*
#include <stdlib.h>
#include <time.h>
void random(int *num1,int *num2){
    *num1=rand()%10+1;
    *num2=rand()%10+1;
   
}


int RESULT(int num1,int num2,int answer){
    return (num1*num2==answer);
}



void PositiveComment() {
    int choice = rand() % 4;  

    switch (choice) {
        case 0:
            printf("Very good!\n");
            break;
        case 1:
            printf("Excellent!\n");
            break;
        case 2:
            printf("Nice work!\n");
            break;
        case 3:
            printf("Keep up the good work!\n");
            break;
    }
}



void NegativeComment() {
    int choice = rand() % 4;  // Generates a random number between 0 and 3

    switch (choice) {
        case 0:
            printf("No. Please try again.!\n");
            break;
        case 1:
            printf("Wrong. Try once more.!\n");
            break;
        case 2:
            printf("Don't give up!\n");
            break;
        case 3:
            printf("No. Keep trying.\n");
            break;
    }
}


int main(){
    srand(time(NULL));
    int num1,num2,answer;
    

    random(&num1,&num2);
    printf("how much is %d times %d\n",num1,num2);
    do{
        scanf("%d",&answer);
        if(RESULT(num1,num2,answer)){
            PositiveComment();

            
            random(&num1,&num2);
            printf("how much is %d times %d\n",num1,num2);

        }else{
            NegativeComment();
        }

    }while(1);
    return 0;

}



*/











//task6
#include <stdlib.h>
#include <time.h> 

void random(int *num1, int *num2) {
    *num1 = rand() % 10 + 1;
    *num2 = rand() % 10 + 1;
}

int RESULT(int num1, int num2,int answer){
    return(num1*num2==answer);

}



void PositiveComment() {
    int choice = rand() % 4;

    switch (choice) {
        case 0:
            printf("Very good!\n");
            break;
        case 1:
            printf("Excellent!\n");
            break;
        case 2:
            printf("Nice work!\n");
            break;
        case 3:
            printf("Keep up the good work!\n");
            break;
    }
}



int main() {
    srand(time(NULL));

    int num1, num2, answer;
    int correctCount = 0;
    int incorrectCount = 0;

    for (int i = 0; i < 10; i++) {
        random(&num1, &num2);

        printf("How much is %d times %d?\n", num1, num2);
        scanf("%d", &answer);

        if (RESULT(num1, num2,answer)) {
           PositiveComment();
            correctCount++;
        } else {
            printf("No. Please try again.\n");
            incorrectCount++;
        
        }
    }

   
    int total= correctCount + incorrectCount;
    float percentage = (float)correctCount / total * 100;

    printf("Correct value: %d\n", correctCount);
    printf("Incorrect value: %d\n", incorrectCount);
    printf("Percentage value: %.2f%\n", percentage);

    if (percentage < 75) {
        printf("Please ask your teacher for extra help.\n");
    } else {
        printf("Congratulations, you are ready to go to the next level!\n");
    }

    

    return 0;
}