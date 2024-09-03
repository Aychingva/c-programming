#include <stdio.h>
/*
int main(void){
    int a,b,c;
    printf("enter the b and c");
    scanf("%d %d",&b,&c);
     a=2*b+3*c;
    printf("value of a is %d\n",a);
    return 0;

}
*/
/*
int main(void){
    double a;
    printf("enter the a:");
    scanf("%lf",&a);
    a*=1.25;
    printf("value of increasing a is %lf\n",a);
    return 0;
    
}
*/
/*
/*
int main(void){
    int p,q,r;
    p=7;
    r=0;
    q=p+3;
    p=p+r;
    printf("%d %d",p,q);
    
    return 0;

}
*/


/*

int main(void){
    int rate=15;
    printf("Maria earn %d dollar in hour",rate);
    return 0;
}
*/



/*
int main(void){
    float inch,foot,yard;
    printf("enter the inch");
    scanf("%f",&inch);
    foot=inch/12;
    yard=inch/36;
    printf("distance of foot is %f /n",foot);
    printf("distance of yard is %f /n",yard);
    return 0;

    
}
*/


/*
#include <math.h>
int main (){
    double velocity,initial_velocity,acceleration,time,distance;
    printf("initial_velocity");
    scanf("%lf",&initial_velocity);
    printf("acceleration");
    scanf("%lf",&acceleration);
    printf("time");
    scanf("%lf",&time);

    velocity=initial_velocity+acceleration*time;
    distance=initial_velocity*time+0.5*acceleration*time*time;
    printf("%lf %lf",velocity,distance);
    return 0;
}
*/

/*
#include <math.h>
int main(){
    float m1,sm1,m2,sm2;
    printf("enter the number");
    scanf("%f %f %f %f" ,&m1 ,&sm1,&m2,&sm2);
    float length=m1+sm1/100,width=m2+sm2/100;
    float area=length*width;
    printf("%f",area);
    return 0;
    

}
*/
#include <math.h>
int main(){
    float weekly_pay,hours;
    printf("enter the weekly_pay");
    scanf("%f",&weekly_pay);
    printf("enter the hours");
    scanf("%f",&hours);
     float averageofpayperhour=weekly_pay/hours;
     int dollar=(int)(averageofpayperhour);
     int cent=(averageofpayperhour-(int)(averageofpayperhour))*100;
     printf("your average hourly rate is %d dollar and %d cent.\n",dollar,cent);
     

}





