#include<stdio.h>
//task 1
/*
struct Length{
    double yard,feet,inch;
};

void show(struct Length len){
    printf("yard;%lf\n",len.yard);
    printf("feet;%lf\n",len.feet);
    printf("inch;%lf\n",len.inch);

}


struct Length add(struct Length l1,struct Length l2){
    struct Length total={l1.yard+l2.yard,l1.feet+l2.feet,l1.inch+l2.inch};
    return total;

};

int main(){
    struct Length v1={
        .yard=5.2,
        .feet=3.2,
        .inch=50.2
    };
    show(v1);
    struct Length v2={
        .yard=8.9,
        .feet=6,
        .inch=34.2
    };
    show(v2);
    struct Length summ=add(v1,v2);
    show(summ);


}


*/






/*
//task 2
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>
struct Employee{
    int id;
    char first_name[20];
    char last_name[20];
    int age;
    int work_ex;
};



void print_emp(struct Employee p){
    printf("id %d\n",p.id);
    printf(" first name %s\n",p.first_name);
    printf("second name %s\n",p.last_name);
    printf("age %d\n",p.age);
    printf("work experinece %d\n",p.work_ex);
}




void id_checker(struct Employee s[5]){
    int id1,d=0;
    printf("enter the id ;");
    scanf("%d",&id1);
    for(int j=0;j<5;j++){
        if(id1==s[j].id){
            print_emp(s[j]);
            d=0;
        }
        
    }if(d==1){
         printf("invalid number");

    }
       

}



int main(){
    srand(time(NULL));
    struct Employee employees[5];
    char last_name[5][20]={"aliyev","haciyev","memmedli","huseynov","babali"};
    char first_name[5][20]={"ali","laman","aysel","cavid","murad"};
    for(int i=0;i<5;i++){
        employees[i].id=i;
        employees[i].age=rand()%30+30;
        employees[i].work_ex=rand()%30+30;
        strcpy(employees[i].first_name,first_name[i]);
        strcpy(employees[i].last_name,last_name[i]);
        print_emp(employees[i]);
       
    }
     id_checker(employees);


}

*/





//task3
/*

int packedcharacters(char c1,char c2,char c3,char c4){
    int packedvalue=c1;
    packedvalue=(packedvalue<<8)|c2;
    packedvalue=(packedvalue<<8)|c3;
    packedvalue=(packedvalue<<8)|c4;
    return packedvalue;
}




void bitformat(int value){
    for(int i=32;i>=0;i--){
        printf("%d",(value>>i)&1);
        if(i%8==0){
            printf(" ");
        }
    }
    printf("\n");
}



int main(){
    char c1,c2,c3,c4;
    printf("enter the four characters;");
    scanf("%c %c %c %c",&c1,&c2,&c3,&c4);
    printf("before packing;\n");
    bitformat(c1);
    bitformat(c2);
    bitformat(c3);
    bitformat(c4);

   int value=packedcharacters(c1,c2,c3,c4);
    printf("\nafter packing;\n");
    bitformat(value);


}








*/

/*
int main(){
    char alphs[5]="abcd",*ptr;
    int num,idx=0;
    ptr=(char*)&num;
    for(ptr;ptr<(char*)&num+sizeof(int);ptr++){
        *ptr=alphs[idx++];
    }
    printf("after num;%d\n",num);
    ptr=(char*)&num;
    for(ptr;ptr<(char*)&num+sizeof(int);ptr++){
        printf("char %c>>ascii code %d\n",*ptr,*ptr);
    }
    return 0;

}
*/





/*
struct fruit{
    char name[20];
    char color[20];
};


void display(struct fruit s){
    printf("name%s\n",s.name);
    printf("color%s",s.color);
}


int main(){
    struct fruit s={"apple","red"};
    /*
    printf("enter the name");
    scanf("%s",&s.name);
    printf("enter the  color ;");
    scanf("%s",&s.color);
    */
    display(s);
}
*/

