#include<stdio.h>
#include<stdlib.h>

// int main(){
//     FILE *fileptr=NULL;
//     char filename[20]="test.txt";
//     fileptr=fopen(filename,"r+");
//     if(fileptr==NULL){
//         perror("error on opening file");
//     }else{
//         printf("reading file is okey;");
//     }
    
//     char ch='z';
//     fputc(ch,fileptr);
//     fputc('t',fileptr);
//     char name[10]="Samira";
//     int num=24;
//     float fnum=6.5454;
//     fprintf(fileptr,"%s %d %f",name,num,fnum);
//     rewind(fileptr);
//     char ch1;
//     ch1=fgetc(fileptr);
//     while(ch1!=EOF){
//         printf(">> %c\n",ch1);
//         ch1=fgetc(fileptr);
//     }
//     fclose(fileptr);
//     fileptr=NULL;
//     return 0;
// }



#include<conio.h>
#define FILE_name "records.txt"
#include<ctype.c>

void createFile(){
    FILE* myfile=NULL;
    myfile=fopen(FILE_name," ");
    if(myfile==NULL){
        myfile=fopen(FILE_name,"w");

    }fclose(myfile);

}
typedef struct{
    unsigned int accountNumber;
    char lastname[50],firstname[50];
    double balance;

}client;



void showrecord();
void newrecord();
void deleterecord();
void updaterecord();
void userchoice(unsigned int *choice);
void reusefunction(void(*functionname()));



int main(){
    unsigned int choice;
    while(1){
        userchoice(&choice);
        switch(choice){
        case 1:
            showrecord();
        case 2:
            reusefunction(newrecord);
            
        case 4U:
            reusefunction(deleterecord);
            system("cls");
        case 2:
            newrecord();
            system("cls");
        case 5:
            exit(-1);
        default:
            printf("invalid choice;");

        }
    }
 
    
    
    return 0;

}



void userchoice(unsigned int *choice){
    puts("1 .show record;");
    puts("add new record;");
    puts("update the record;");
    puts("delete the record;");
    puts("exit program;");
    puts("enter the choice;");
    scanf("%u",choice);

}



void newrecord(){
    FILE *fileptr=fopen(FILE_name,"a+");
    int tempaccountnumber;
    printf("enter the acoount;");
    scnaf("%u",&tempaccountnumber);
    client client;
    while(fscanf(FILE_name,"%u %s %s %lf",&client.accountnumber,client.firstname,client.lastname,&client.balance)){
        if(tempaccountnumber==client.accountnumber){
            puts("this acount number exist already!");
            return;
        }  
    }
    printf("enter the last name");
    scanf("%s",client.lastname); 
    printf("enter the first name");
    scanf("%s",client.firstname); 
    printf("enter the acount number;");
    scanf("%u",&client.accountnumber);
    printf("enter the balance");
    scanf("%lf",&client.balance); 


}


void showrecord(){
     FILE *fileptr=fopen(FILE_name,"r+");
     client client;
     while(scanf(FILE_name,"%u %s %s %lf",&client.accountnumber,client.firstname,client.lastname,&client.balance)){
        printf("%u %s %s %lf\n",client.acountnumber,client.lastname,client.firstname,client.balance);
     }
     printf("\n");
     fclose(fileptr);

}

void reusefunction(void(*functionname())){
    char ans='y';
    while(tolower(ans)=='y'){
        functionname(); 
        printf("for continue press y;");
        scanf("%c",&ans);
    }

}


void deleterecord(int targetaccount){
    FILE *fileptr=fopen(FILE_name,"r");
    FILE *tempfile=fopen("temp.txt","w");
    client client;
    printf("enter account number to delete;");
    scanf("%u",&targetaccount); 
}

void update(int targetaccount){
    FILE *fileptr=fopen(FILE_name,"r");
    FILE *tempfile=fopen("temp.txt","w");
    client client;
    printf("enter account number to delete;");
    scanf("%u",&targetaccount); 
}






















