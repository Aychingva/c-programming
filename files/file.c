#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#define FILE_NAME "records.txt"

typedef struct
{
    unsigned int accountNumber;
    char lastName[50], firstName[50];
    double balance; 
}Client;

void createFile();
void showRecord();
void newRecord();
void deleteRecord();
void updateRecord();
void userChoice(unsigned int *);
void reuseFunction(void (*functionName)());

int main()
{
    unsigned int choice;
    createFile();
    while(1)
    {
        userChoice(&choice);
        switch(choice)
        {
            case 1U:
                showRecord();
                break;
            case 2U:
                reuseFunction(newRecord);
                system("cls");
                break;
            case 3U:
                reuseFunction(updateRecord);
                break;

            case 4U:
                reuseFunction(deleteRecord);
                system("cls");
                break;
            case 5U: 
                exit(-1);
            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}

void userChoice(unsigned int *choice)
{
    // User selects one of the options
    puts("1. Show record");
    puts("2. Add new record");
    puts("3. Update the record");
    puts("4. Delete the record");
    puts("5. Exit program\n");

    puts("Enter the choice: ");
    scanf("%u", choice);
}

void newRecord()
{
    FILE *fileptr = fopen(FILE_NAME, "a+");
    unsigned int tempAccountNumber;
    Client client;
    printf("Enter account number: ");
    scanf("%u",&tempAccountNumber);
    while(fscanf(fileptr,"%u %s %s %lf",&client.accountNumber,client.lastName,client.firstName,&client.balance)!=EOF){
        if (tempAccountNumber==client.accountNumber){
            puts("This account number exist already!");
            fclose(fileptr);
            return;
        }
    }

    printf("Enter the last name of new client: ");
    scanf("%s",client.lastName);
    printf("Enter the first name of new client: ");
    scanf("%s",client.firstName);
    printf("Enter the balance of the new client: ");
    scanf("%lf",&client.balance);
    fprintf(fileptr,"%u %s %s %.2lf\n",tempAccountNumber,client.lastName,client.firstName,client.balance);
    fclose(fileptr);
}

void showRecord(){
    FILE *fileptr = fopen(FILE_NAME, "r");
    Client client;
    while (fscanf(fileptr,"%u %s %s %lf",&client.accountNumber,client.lastName,client.firstName,&client.balance)!=EOF){
        printf("%u %s %s %.2lf\n",client.accountNumber,client.lastName,client.firstName,client.balance);
    }
    printf("\n");
    fclose(fileptr);
    fileptr = NULL;
}

void createFile(){
    FILE* myfile=NULL;
    myfile=fopen(FILE_NAME,"r");
    if (myfile==NULL){
        myfile=fopen(FILE_NAME,"w");
    }
    fclose(myfile);
    myfile=NULL;
}

void reuseFunction(void (*functionName)()){
    char ans[2];
    do{
        functionName();
        printf("To continue press (y):");
        scanf("%s", ans);
        ans[0] = tolower(ans[0]);
        //ans[1] = '\0';
    }while(strcmp(ans, "y") == 0);
}

void deleteRecord(){
    FILE *fileptr = fopen(FILE_NAME, "r");
    FILE *tempfile = fopen("temp.txt", "w");
    Client client;
    unsigned int targetaccount;
    printf("Enter account number to delete: ");
    scanf("%u",&targetaccount);
    while(fscanf(fileptr,"%u %s %s %lf",&client.accountNumber,client.lastName,client.firstName,&client.balance)!=EOF){
        if (targetaccount!=client.accountNumber){


            fprintf(tempfile,"%u %s %s %.2lf\n",client.accountNumber,client.lastName,client.firstName,client.balance);
        }
    }
    fclose(fileptr);
    fileptr=NULL;
    fclose(tempfile);
    tempfile=NULL;
    remove(FILE_NAME);
    rename("temp.txt",FILE_NAME);
}

void updateRecord()
{
    FILE *fileptr = fopen(FILE_NAME, "r");
    FILE *tempfile = fopen("temp.txt", "w");
    Client client;
    unsigned int targetaccount;
    printf("Enter account number to update: ");
    scanf("%u",&targetaccount);
    while(fscanf(fileptr,"%u %s %s %lf",&client.accountNumber,client.lastName,client.firstName,&client.balance)!=EOF){
        if (targetaccount==client.accountNumber){
            printf("Enter the new balance:\n");
            scanf("%lf",&client.balance);
            
        }
        fprintf(tempfile,"%u %s %s %.2lf\n",client.accountNumber,client.lastName,client.firstName,client.balance);
    }
    fclose(fileptr);
    fileptr=NULL;
    fclose(tempfile);
    tempfile=NULL;
    remove(FILE_NAME);
    rename("temp.txt",FILE_NAME);

}

