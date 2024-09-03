#include<stdio.h>


struct Length{
    double yard,feet,inch;

};

void show(struct Length len){
    printf("yard;%lf\n",len.yard);
    printf("feet;%lf\n",len.feet);
    printf("inch %lf\n",len.inch);
}

struct Length add(struct Length l1,struct Length l2)
{
    struct Length total={l1.yard+l2.yard,l1.feet+l2.feet,l1.inch+l2.inch};
    return total;



};

int main(){
    struct Length v1={
        .yard=5.2,
        .feet=10.5,
        .inch=12.5
    };
    show(v1);


    struct Length v2={
        .yard=50.2,
        .feet=44.5,
        .inch=15.3
    };
    show(v2);
    struct Length summ=add(v1,v2);
    show(summ);
}
