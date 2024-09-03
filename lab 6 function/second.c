#include <stdio.h>
#include <math.h>
/*
int funcA(double x){
    return (pow(x,2)+2*pow(x,2)-3);
}



int funcB(double x){
    return (sqrt(x)+2*x+sin(x));

}



int funcC(double x){
    double log4x=log10(3*x)/log10(4);
    return (sin(x)+sqrt(log4x)+3*exp(x));

}



int funcD(double x){
    return (3*sin(x));
}


int main(){
    double x;
    double a,b,h;
    printf("enter the a b h: ");
    scanf("%lf %lf %lf",&a,&b,&h);
    if (a>b){
        printf("invalid numbers");
    }
    for ( x=a;x<=b;x+=h){
        printf("functionA-->%d\n",funcA(x));
        printf("fcunctionB--.%d\n",funcB(x));
        printf("functionC-->%d\n",funcC(x));
        printf("functiond-->%d\n",funcD(x));
       


    }
    return 0;

}

*/
#include <stdio.h>
#include <math.h>

/*
//#define M_PI 3.141592653589793238462643383279502884197

double areaofcircle(double r1,double s){
   double s2=M_PI*pow(r1,2)-s;
   double r2=sqrt(s2/M_PI);
   return r2;
}


int main(){
    double r1,s;
    printf("enter the r1 and s");
    scanf("%lf %lf",&r1,&s);
    printf("radius of s2 %lf",areaofcircle(r1,s));
    return 0;

    
}


*/

/*
double min(double x,double y,double z){
    if((x>y&&z>y) ||(y==x && z>y))return y;
    else if((y>x&&z>x) ||(x==y&& z>x))return x;
    else return z;
    
       
}





double max(double x,double y){
    if(x>y){
        return x;
    }else{
        return y;
    }
}


int main(){
    double x,y,z;
    printf("enter the x y z");
    scanf("%lf %lf %lf",&x,&y,&z);

    double sum=x+y+z;
    double result=min(max(x,y),max(y,z),sum);
    printf("%.2lf",result);
    return 0;
}

*/

/*
double areaofquad(double a,double b,double c,double d,double f){
   double p1=(a+b+f)/2;
   double area1=sqrt(p1*(p1-a)*(p1-b)*(p1-f));
   double p2=(f+d+c)/2;
   double area2=sqrt(p2*(p2-f)*(p2-d)*(p2-c));
   double sum=area1+area2;
   return sum;
}

int main(){
    double a,b,c,d,f;
    printf("enter the a b c d f;");
    scanf("%lf %lf %lf %lf %lf",&a,&b,&c,&d,&f);
    printf("total area of quant %.5lf",areaofquad(a,b,c,d,f));
    return 0;
}

*/

/*

int function(int m,int n){
   
   if(m==n ||m==0){
    return 1;
   }else if(0<m &&m<n){
    return function(m-1,n-1)+function(m,n-1);
   }else{
    return -1;
   }

}
int main(){
    int m ,n;
    printf("enter the m and n;");
    scanf("%d %d",&m,&n);
    printf("result is %d",function(m,n));
    return 0;
}








   */
/*
int main(){
    double initial_summ;
    int initial_year;
    int copyyear;
    double copy;
    double previous_rate=0.0;
    
    printf("enter the initial sum;");
    scanf("%lf",&initial_summ);
    printf("enter the initial year;");
    scanf("%d",&initial_year);
    copyyear=initial_year;
    copy=initial_summ;
    double rate;
    printf("enter the inflation rate for the year %d\n",initial_year);
    scanf("%lf",&rate);
    initial_year=initial_year+1;
    initial_summ=initial_summ/(1+rate/100);
   
    while(1){
        
        printf("enter the inflation rate for the year %d\n",initial_year);
         
        scanf("%lf",&rate);
        if(rate<=-100){
            break;
            
        }else if(rate>previous_rate){
            printf("inflation rate has gone up since previous year\n ");
           
        }else if(rate<previous_rate){
             printf("inflation rate has gone down since previous year\n ");
            

        }
        previous_rate=rate;
        initial_year=initial_year+1;
        initial_summ/=(1+rate/100);
        
        
    }
    
    printf("the value of %.2lf euros in %d is %.2lf euros in %d",copy,copyyear,initial_summ,initial_year);
    return 0;
}







/*

int binary(int number){
    int summ=0;
    int number;
    int digit;
    int summ=0;
    while(number>0){
        digit=number%2;
        summ+=summ*10+digit;
    }
}

*/




/*
int main(){
    int stops;
    printf("enter the number of stops;");
    scanf("%d",&stops);
    int batterycapacity=50;
    int kilometres=250;
    double newkilometres;
    double minutes;
    int summ=0;
    double left_charge=50;

    printf("battary left;%d range;%d total drive 0 km with 0 stops;",batterycapacity,kilometres );

    for(int i=1;i<=stops;i++){
    
        printf("enter kilometres planned to be driven for each trip and planned charging time for each; ");
    
        scanf("%lf",&newkilometres); 
        summ+=newkilometres;
        if(newkilometres>250){
            printf("invalid");
            break;
        }

        
        printf("minutes charged;");
        scanf("%lf",&minutes);
    
        double charge=minutes*25/30;
        double consume=newkilometres*0.2/1;
        left_charge=left_charge-consume+charge;
        
    
      
        if(left_charge>50){
            left_charge=50;   
        }
        
        
        printf("battery charge %lf range;%lf",left_charge,left_charge*5);
        printf("total drive %d km with %d",summ,i);

    }

}



*/





#include<stdlib.h>
#include <time.h>

int dive(){
    return rand()%2+1;
}


int goal(int kick_direction,int dive_direction){
    return kick_direction!=dive_direction;
}


void print_ball(int ball_direction){
    if(ball_direction==1){
        puts("-----------------");
        
        puts("|    O          |");
        puts("|               |");
        puts("|               |");
    
    }else if(ball_direction==2){
        puts("-----------------");
        puts("|          O    |");
        puts("|               |");
        puts("|               |");


    }

}



void print_goalkeeper(int goalkeeper){
    
     if(goalkeeper==1){
        puts("-----------------");
        puts("|  _ o|         |");
        puts("|     \\         |");
        puts("|      \\\\     |");


    }else if(goalkeeper==2){
        puts("-----------------");
        puts("|         |o _  |");
        puts("|         /     |");
        puts("|       //      |");

    }

}


int main(){
    //srand(time(NULL));
    int seed;
    printf("enter the seed \n");
    scanf("%d",&seed);
    srand(seed);



    int rounds;
    printf("enter the rounds\n");
    scanf("%d",&rounds);
    puts("-----------------");
    puts("|     _ o _     |");
    puts("|       |       |");
    puts("|      / \\      |");




    char team1[20],team2[20];
    printf("enter the team1;\n");
    scanf("%s",&team1);
    printf("enter the team2;\n");
    scanf("%s",&team2);
    int score1=0;
    int score2=0;
    //printf("%s has scored %d,%s has scored %d\n",team1,score1,team2,score2);
    for(int i=1;i<=rounds || score1==score2;i++){
        printf("%s has scored %d,%s has scored %d",team1,score1,team2,score2);
        if(i%2==1){
            printf("%s turn\n",team1);
        }else if(i%2==0){
            printf("%s turn\n",team2);
        }
        printf("round %d",i);
        
        int kick_direction;
        printf("\nwhere will the player shoot? 1:left/2:right\n");
        scanf("%d",&kick_direction);
        int dive_direction=dive();
        int score=goal(kick_direction,dive_direction);
        print_ball(kick_direction);
        print_goalkeeper(dive_direction);
        if (score){
            if(i%2==1){
                score1++;
            }else if(i%2==0){
                score2++;
            }


        }else{
            printf("no goal");
        }

    printf("game finished!! %s scored %d goal %s scored %d goal ",team1,score1,team2,score2);


    if(score1>score2){
        printf("%s won\n!",team1);
    }else if(score1<score2){
        printf("%s won\n!",team2);
    }

            

      
        
    }



return 0;

}





