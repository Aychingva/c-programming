#include<stdio.h>

/**

int main(){
    int col,row;
    int n,m;
    int d=0;

    printf("enetr the col and row");
    scanf("%d %d",&col,&row);
    scanf("%d %d",&n,&m);
    int arr[row][col];
    for(int i=0;i<n;i++){
        if(i%2==1){
             for(int j=0;j<m;j++){
                arr[i][j]=d;
                d++;}
            printf("\n");
        
        }
        else{
            for(int j=m-1;j>=0;j--){
                arr[i][j]=d;
                d++;
            }
            printf("\n");
        }
        
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    
   
}

*/
/*
int main(){
    int n;
    printf("enter the n ");
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i+j<n-1){
                arr[i][j]=2;
            }
            else if(i+j==n-1){
                arr[i][j]=0;
            }else{
                arr[i][j]=1;
            }
        
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
}
*/   



/*
#include<math.h>
int main(){
    int n;
    printf("enter the participant");
    scanf("%d",&n);
    double summ=0;
    double cost[n];
    for(int i=0;i<n;i++){
   
        printf("enter the participant's cost");
        scanf("%lf",&cost[i]);
        summ+=cost[i];
    }
    printf("%d",summ);
    double average=summ/n;

    for(int i=0;i<n;i++){
        double x=cost[i]-average;
        if(x>=0){
            printf("participant %d may receive %lf\n",i+1,x); 
        }else if(x<0){
            printf("participant %d may pay %lf\n",i+1,fabs(x));
        }


    }  

}
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<stdbool.h>
/*
int main()
{
    char sentence[100] = "I have two apples, one lemon, three watermelon and a cup of tea.";
    srand(time(NULL));
    int key = rand();
    for(int i = 0; i < strlen(sentence); i++)
    {
        sentence[i] = key ^ sentence[i];
    }
    printf("%s\n", sentence);
    for(int i = 0; i < strlen(sentence); i++)
    {
        sentence[i] = key ^ sentence[i];
    }
    printf("%s\n", sentence);
    return 0;
}

*/
/*
bool is_palindrom(unsigned long long int n){
    int copy = n;
    int num = reverse(n);
    
    while(n > 0)
    {
        int dig = n % 10;
        n /= 10;
        num = num * 10 + dig; 
    }
    if(copy == num) return true;
    return false;
}

unsigned long long int reverse(unsigned long long int n)
{
    int num = 0;
    while(n > 0)
    {
        int dig = n % 10;
        n /= 10;
        num = num * 10 + dig; 
    }
    return num;
}

int main(){
    unsigned long long int n;
    int count = 0;
    scanf("%d", &n);
    while(!is_palindrom(n))
    {
        n += reverse(n);
        count++;
    }
    printf("Count = %d", count);
    return 0;
}
*/
/*
int main()
{
    char encodingKey[26] = "CPATFSGKZYXREIHQWUJLNOVDBM";
    char name[20] = "ABC";
    for(int i = 0; i < strlen(name); i++)
    {
        name[i] = encodingKey[name[i] - 'A'];
    }
    printf("%s", name);
}
*/

/*
int main(){
    int number;
    printf("enter the number of books");
    scanf("%d",&number);
    double book;
    double total=0;
    for(int i=0;i<number;i++){
        printf("enter the %d book ",i+1);
         double book;
        scanf("%lf",&book); 
        if(book>20.0){
            int limit=6;
            total+=book*6;
            printf("%lf\n",total);}
        else if(book>30.0){
            total+=book*30;
            printf("%lf\n",total);}
        else if(book<20.0){
            total+=book*0.2;
            printf("%lf\n",total);}
    }
    
    printf("%lf",total);
}*/



/*
int main() {
    int books;
    printf("How many overdue books do you have?\n");
    scanf("%d", &books);

    int delays[books];
    for (int i = 0; i < books; i++) {
        printf("By how many days is Book %d late?\n", i + 1);
        scanf("%d", &delays[i]);
    }

    printf("Overdue fees:\n");

    double LIMIT = 6.0;  // euros
    double DAY_FEE = 0.2;  // euros
    double BAN_LIMIT = 30.0; // euros
    double totalFee = 0.0;

    for (int i = 0; i < books; i++) {
        double fee = delays[i] * DAY_FEE; // Calculate the fee for the current book
        if (fee > LIMIT) {
            fee = LIMIT; // Cap the fee at 6 euros per book
        }
        totalFee += fee; // Add the fee to the total
        printf("Book %d fee: %.2f euros\n", i + 1, fee);
    }

    // Print the total fee
    printf("Total fee: %.2f euros\n", totalFee);

    // Check if the total fee is over 30 euros and update the borrowing status accordingly
    if (totalFee > BAN_LIMIT) {
        printf("Your right to borrow books has been suspended.\n");
    }

    return 0;
}
*/
/*
#define elements 5

void sort(int arr[]){
    for(int i=0;i<elements-1;i++){
        int minn=i;
        for(int j=i+1;j<elements;j++){
            if(arr[j]<arr[minn]){
                minn=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[minn];
        arr[minn]=temp;


    }
}

void setarray(int arr[]){
    for(int i=0;i<elements;i++){
        arr[i]=rand()%9;
    }
}



void printarray(int arr[]){
    for(int i=0;i<elements;i++){
        printf("%d",arr[i]);
    }
    
}


void evenorodd(int arr[],int ls[],int lst[]){
    int evenindex=0;
    int oddindex=0;
    for(int i=0;i<elements;i++){
        if(arr[i]%2==0){
            ls[evenindex++]=arr[i];
        }
        if(arr[i]%2==1){
            lst[oddindex++]=arr[i];
        }
    }
}

int main(){
    FILE *fileptr=NULL;
    char filename[100]="test.txt";
    fileptr=fopen(filename,"r+");
    if(fileptr==NULL){
        printf("unable to open file");
        return 1;
    }
   int arr[elements]={0};
   int ls[elements]={0};
    int lst[elements]={0};
    setarray(arr);
    printarray(arr);
    puts("---");

    evenorodd(arr,ls,lst);
    sort(ls);
    sort(lst);
    printarray(ls);
    printarray(lst);
    fclose(fileptr);
    fileptr=NULL;
    
    
}
*/



/*
int main(){
FILE *file;

    // open a file in write mode to write initial data to a file
    file = fopen("sample.txt", "w");
    char string[] = "Hello Educative User!";
    printf("Writing data to file: %s\n", string);
    fprintf(file, "%s\n", string);
    fclose(file);

    // open a file in append mode to add new characters to end of file
    file = fopen("sample.txt", "a");
    char append_string[] = "How are you?";
    printf("Appending data to file: %s\n", append_string);
    fprintf(file, "%s\n", append_string);
    fclose(file);

    // open a file in read mode to read data from the file
    file = fopen("sample.txt", "r");
    char ch;
    printf("\nFile contents: \n");
    while ((ch = fgetc(file)) != EOF) {
        printf("%c", ch);
    }
    printf("\n");
    fclose(file);

}
*/

/*
int main(){
    int num;
    printf("enter the number ");
    scanf("%d",&num);
    int i=0;
    while(1){
        if(num&1<<i){
            break;
        }
        i++;

    }
    printf("%d",1<<i);
}
*/

int maxx(int arr[],int size){
    int max=arr[0];
    for(int i=0;i<size;i++){
       if(arr[i]>max){
        max=arr[i];}
    
    }
    return max;
}


int minn(int arr[],int size){
    int min=arr[0];
    for(int i=0;i<size;i++){
       if(arr[i]<min){
        min=arr[i];}
        
        
    }
    return min;
}





int main(){
    int col,row;
    printf("enter the row and col");
    scanf("%d %d",&row,&col);
    int arr[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            arr[i][j]=rand()%10;
        }

    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    FILE *file=NULL;
    file=fopen("test.c","r+");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            fprintf(file,"%d",arr[i][j]);
        }
    }


    for(int i=0;i<row;i++){
        int arr2[col];
        int summ=0;
        for(int j=0;j<col;j++){
            arr2[j]=arr[i][j];
            summ+=arr[i][j];
        }
        summ=summ-minn(arr2,col)-maxx(arr2,col);
        printf("Sum for row %d: %d\n", i+1, summ);
      
    }
    
   
}