#include<stdio.h>
#include<time.h>
#include<stdlib.h>
/*
#define elements 3

int maxnumber(int *array){
    int maxx=0;
    for(int i=0;i<elements;i++){
        if(array[i]>array[maxx]){
            maxx=i;

        }
    }
   return maxx;

}

void setarray(int *array){
    for(int i=0;i<elements;i++){
        array[i]=rand()%5;
        
    }
}


void printarray(int *array){
     for(int i=0;i<elements;i++){
        printf(" %d ",array[i]);
     }
}


int main(){
    srand(time(NULL));
    int array[elements]={0};
    setarray(array);
    printarray(array);
    int maxindex=maxnumber(array);
    int max=array[maxindex];
    printf("maxx element %d\n",max);
    printf("the maxx elements in array %d",maxindex);

}
*/

/*
#define elements 6

void setarray(int *array){
    for(int i=0;i<elements;i++){
        array[i]=rand()%5;
        
    }
}


void printarray(int *array){
     for(int i=0;i<elements;i++){
        printf(" %d ",array[i]);
     }
}

int maxindex(int *array){
    int maxdif=-1;
    for(int i=0;i<elements;i++){
        for(int j=elements-1;i<j;j--){
            if(array[i]<array[j]&&maxdif<(j-i)){
                maxdif=(j-i);
            }

        }
    }
    return maxdif;


}

int main(){
   int array[]={1,2,3,4,5,6};
  int max=maxindex(array);
   printf("%d",max);
   printf("%d",sizeof(array)/4);
}
*/



/*
#define elements 6
int repeatedelements(int *array){
    for(int i=0;i<elements-1;i++){
        for(int j=i+1;j<elements;j++){
            if(array[i]==array[j]){
               return array[i];
                
            }
        }
    }
    return -1;
}



int main(){
    int array[]={1,0,2,3,4,1,6};
  
    puts("-----");
    int repeated=repeatedelements(array);
    if(repeated==-1){
        printf("no repeated number");
    }else{

        printf("%d",repeated);
    }
    
}
*/

#include<ctype.h>
#include<string.h>
/*
int main(){
    char text[100];
    printf("enter the string;");;
    fgets(text,sizeof(text),stdin);
    text[strcspn(text, "\n")] = '\0';
    int count=0;
    for(int i=0;text[i]!='\0';i++){
        count+=1;
    }
    printf("%d",count);
}

*/


/*
int main(){
    char text[100];
    printf("enter the string;");
    fgets(text,sizeof(text),stdin);
    char st[100];
    printf("enter the string;");
    fgets(st,sizeof(st),stdin);
    strcpy(text,st);
    printf("first string ;%s",text);
    printf("second string ;%s",st);

}

*/






/*
int main(){
    char text[100];
    printf("enter the string;");
    fgets(text,sizeof(text),stdin);
    text[strcspn(text, "\n")] = '\0';
    char st[100];
    printf("enter the string;");
    fgets(st,sizeof(st),stdin);
    strcat(text,st);
    printf("first string ;%s",text);
    printf("second string ;%s",st);

}
*/

/*
int main(){
    char text[100];
    printf("enter the string;");
    fgets(text,sizeof(text),stdin);
    strlwr(text);
    printf("first string ;%s",text);

}

*/


/*
int main(){
    char text[100];
    printf("enter the string;");
    fgets(text,sizeof(text),stdin);
    int words=0;
    for(int i=0;text[i]!='\0';i++){
        if(text[i]=='\n'||text[i]==' '){
            words++;
        }
    }
    printf("the number of words %d",words);
    return 0;

}


*/

/*
int main(){
    char text[100];
    printf("enter the string;");
    fgets(text,sizeof(text),stdin);
    strrev(text);
    printf("%s",text);

}


*/
/*
int main(){
    char text[100],reverse[100];
    int flag;
    printf("enter the string;");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = '\0';
    strcpy(reverse,text);
    strrev(reverse);
    flag=strcmp(text,reverse);
    if(flag==0){
        printf("it is palindrom");
    }else{
        printf("not palindrom");
    }
    return 0;
    
}
*/











/*
void reversed(char st[]){
    int start=0;
    for(int i=0;i<strlen(st);i++){
        if(st[i]==' '||st[i]=='\0'){
            for(int j=i-1;j>start;j--){
                printf("%c",st[j]);
            }
            if(st[i]==' '){
                printf(" ");


            }
            start=i+1;
        }
    }
      
}



int main(){
    char st[100];
    printf("enter the string");
    fgets(st,100,stdin);
    st[strcspn(st,"\n")]='\0';
    reversed(st);
    printf("%s",st);
}

*/

/*
int main(){
    char text[100],reverse[100];
    fgets(text,100,stdin);
    text[strcspn(text,"\n")]='\0';

    int start,stop,len,i;
    int index=0;
    len=strlen(text);
    start=len-1;
    stop=len-1;
    while(start>0){
        if(text[start]==' '){
            i=start+1;
            while(i<=stop){
                reverse[index]=text[i];
                i++;
                index++;
            }
            reverse[index++]=' ';
            stop=start-1;

        }
        start=start-1;
        
        
    }
    for(int i=0;i<=stop;i++){
            reverse[index]=text[i];
            index++;
        }
    printf("original string %s\n",text);
    printf("reverse string %s\n",reverse);
    return 0;
}
*/


/*

int main(){
    int number;
    int count=0;
    printf("enter the number;");
    scanf("%d",&number);
    int total=number*(number+(2*number-1))/2;
    for(int i=1;i<=number;i++){
        for(int space=1;space<=number-i;space++){
            
            printf("  ");
            count++;
        }
        
        for(int j=1;j<i*2;j++){
            count++;
            
          
            printf("A ");

        }
        printf("\n");
        
    }
    printf("%d",count);
}


*/


#include<time.h>
// #define M 3
// #define N 3
// void setarray(int row,int col,int mat1[row][col]){
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             mat1[i][j]=rand()%100;
//         }
//     }
// }



// void printarray(int row,int col,int mat1[row][col]){
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             printf("%4d",mat1[i][j]);
//         }
//         puts(" ");
//     }

// }

// int findmax(int row,int col,int mat1[row][col],int max[]){
    
//     for(int i=0;i<3;i++){
//           max[i]=0;
//         for(int j=0;j<N;j++){
//             if(mat1[i][j]>max[i]){
//                 max[i]=mat1[i][j];
//             }

//         }
//          printf("%4d",max[i]);
         
        
    
    
//     }
//     puts("");
   
// }


// void selection(int *max){
    
//     for(int i=0;i<3;i++){
//         int maxindex=i;
//         for(int j=i+1;j<3;j++){
//             if(max[j]>max[maxindex]){
//                 maxindex=j;
//             }
//         }
//         int temp=max[i];
//         max[i]=max[maxindex];
//         max[maxindex]=temp;
        
//     }
//     for(int i=0;i<3;i++){
//         printf("%4d",max[i]);
//     }
//     puts(" ");
// }



// int main(){
//     srand(time(NULL));
//     int mat1[N][M];
//     setarray(N,M,mat1);
//     printarray(N,M,mat1);
   
//    int max[3];
//    findmax(N,M,mat1,max);
//     selection(max);

// }





/*
#include<time.h>
#define M 3
#define N 3

void setarray(int row,int col,int mat1[row][col]){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            mat1[i][j]=rand()%100;
        }
    }
}



void printarray(int row,int col,int mat1[row][col]){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%4d",mat1[i][j]);
        }
        puts(" ");
    }

}

void findmax(int row,int col,int mat1[row][col]){
    for(int i=0;i<3;i++){
       int max=0;
       for(int j=0;j<3;j++){
        if(mat1[i][j]>max){
            max=mat1[i][j];
        }


       }
       printf("%d",max);
        
    }
}

int main(){
    int mat1[N][M];
    setarray(N,M,mat1);
    printarray(N,M,mat1);
    findmax(N,M,mat1);

}
*/

/*
#define elements 10
void setarray(int *arr){
    for(size_t i=0;i<elements;i++){
        arr[i]=rand()%10;
    }
}


void printarray(int *arr){
    for(size_t i=0;i<elements;i++){
        printf("%d",arr[i]);
    }
}



void findingmin(int *arr){
    int min=0;
    for(size_t i=0;i<elements;i++){
        if(arr[i]<arr[min]){
            min=i;
        }
    }
    printf("%d",arr[min]);

}


int main(){
    int arr[elements]={0};
    setarray(arr);
    printarray(arr);
    puts(" -------");
    findingmin(arr);

}

*/

/*
#define elements 10
void setarray(int *arr){
    for(int i=0;i<elements;i++){
        arr[i]=rand()%20-10;
    }
}


void printarray(int *arr){
    for(int i=0;i<elements;i++){
        printf("%4d,",arr[i]);
    }
}


void samesign(int *arr){
    int flag=0;
    for(size_t i=0;i<elements-1;i++){
        if(arr[i]>0&&arr[i+1]>0 ||arr[i]<0&&arr[i+1]<0){
            flag=1;
            printf("same sign %d %d\n",arr[i],arr[i+1]);

        }
    if(!flag){
        printf("no same sign");
    }
    }
}

int main(){
    srand(time(NULL));
    int arr[elements]={0};
    setarray(arr);
    printarray(arr);
    puts(" -------");
    samesign(arr);

}
*/
/*
#define elements 5
void setarray(int *arr){
    for(int i=0;i<elements;i++){
        arr[i]=rand()%20-10;
    }
}


void printarray(int *arr){
    for(int i=0;i<elements;i++){
        printf("%4d,",arr[i]);
    }
}




void swap(int *num1,int *num2){
    int temp=*num1;
    *num1=*num2;
    *num2=temp;

}


void reverse(int *arr){
    for(size_t i=0;i<elements/2;i++){
        swap(&arr[i],&arr[elements-i-1]);
    }
}

int main(){
    int arr[elements]={0};
    setarray(arr);
    printarray(arr);
    puts("-----");
    reverse(arr);
    printarray(arr);
    
}
*/

/*
#include<stdlib.h>
#define elements 10

void setarray(int *arr){
    for(int i=0;i<elements;i++){
        arr[i]=rand()%20-10;
    }
}


void printarray(int *arr){
    for(int i=0;i<elements;i++){
        printf("%4d,",arr[i]);
    }
}


void selection_sort(int *arr){
    for(size_t i=0;i<elements;i++){
       int min=i;
       for(size_t j =i+1;j<elements;j++){
        if(arr[min]>arr[j]){
            min=j;
        }
       }
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;

    }
}


int main(){
    srand(time(NULL));
    int arr[elements]={0};
    setarray(arr);
    printarray(arr);
    puts("\n");
    selection_sort(arr);
    printarray(arr);
}
*/



/*
void setarray(int row,int col,int arr[row][col]){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            arr[i][j]=rand()%10;
        }
    }
}


void printarray(int row,int col,int arr[row][col]){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",arr[i][j]);
        }
        puts(" ");

    }

}

int main(){
    int col;
    int row;
    int row1,col1;
    printf("enter the row and colum;");
    scanf("%d %d",&row,&col);
    printf("enter the row and colum;");
    scanf("%d %d",&row1,&col1);
    int arr[row][col];
    int array2[row1][col1];
    setarray(row,col,arr);
    printarray(row,col,arr);
    printf("\n");
    setarray(row1,col1,array2);
    printarray(row1,col1,array2);
}
*/



#include<string.h>
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>


/*
int main(){
    char st[100];
    fgets(st,100,stdin);
    for(int i=0;i<strlen(st);i++){
        if(isupper(st[i])){
            st[i]=tolower(st[i]);

        }else{
            st[i]=toupper(st[i]);
        }
    }
    printf("%s",st);
}
*/




/*
int main(){
    char st[6][20];
    double total=0;
    double values[6];
    int n=6;
    for(int i=0;i<n;i++){
        printf("%d.",i+1);
        scanf("%s",st[i]);
        values[i]=strtod(st[i],NULL);
        total+=values[i];
        printf("%lf\n",total);
        
    }
    printf("%lf",total);
}

*/

/*
int main(){
    char st[5][20];
    float arr[5];
    float total=0;
    for(int i=0;i<5;i++){
        printf("%d\n",i+1);
        scanf("%s",st[i]);
        arr[i]=strtod(st[i],NULL);
        total+=arr[i];
        printf("%f\n",total);

    }
}
*/

/*
int main(){
    char st[100];
    char st1[100];
    printf(" enter the st and st1;");
    fgets(st,100,stdin);
    fgets(st1,100,stdin);
    st[strcspn(st,"\n")]='\0';
    strncat(st,st1,3);
    printf("final %s %s",st1,st);
    printf("%d",strlen(st));
}
*/


/*
int main(){
    char st[100];
    fgets(st,100,stdin);
    int vowels=0;
    int cons=0;
    int digit=0;
    int space=0;
    for(int i=0;i<strlen(st);i++){
        if(isalpha(st[i])){
            if(st[i]=='a' || st[i]=='e' || st[i]=='o' || st[i]=='u' ||st[i]=='i'){
                vowels++;

            }else{
                cons++;
            }
        }else if(isdigit(st[i])){
            digit++;

        }else if(isspace(st[i])){
            space++;
        }
    }
    printf("%dcons ",cons);
    printf("%d vowels ",vowels);
    printf("%d digits ",digit);
    printf("%d space ",space);

}


*/

/*
int main(){
    char st[100];
    
    while(1){
        printf("enter the sting;");
        fgets(st,100,stdin);
        st[strcspn(st,"\n")]='\0';
        if(strcmp(st,"exit")==0){
            break;
        }
        else if(strncmp(st,"th",2)==0){
        printf("it begins th");}
        else{
            printf("does not begin th");
        }
    }

}


*/


/*
int main(){
    char st[100];
      while(1){
        printf("enter the sting;");
        fgets(st,100,stdin);
        st[strcspn(st,"\n")]='\0';
        if(strcmp(st,"exit")==0){
            break;
        }
        else if(strcmp(st+strlen(st)-4,"tion")==0){
        printf("it ends tion");}
        else{
            printf("false");
        }
    }
    return 0;

}


     
*/
    
    
/*


int random(){
    return rand()%5;
}


int main(){
    char article[5][100]={"the","a","one","some","any"};
    char noun[5][100]={"boy","girl","dog","town","car"};
    char verb[5][100]={"drove","jumped","ran","walked","skipped"};
    char pre[5][100]={"to","from","over","under","on"};
    char sentence[100]="";
    for(int i=0;i<20;i++){
         char sentence[100]="";
        strcat(sentence,article[random()]);
        strcat(sentence," ");
        strcat(sentence,noun[random()]);
        strcat(sentence," ");
        strcat(sentence,verb[random()]);
        strcat(sentence," ");
        strcat(sentence,pre[random()]);
        strcat(sentence," ");
        strcat(sentence,article[random()]);
        strcat(sentence," ");
        strcat(sentence,noun[random()]);
        sentence[0]=toupper(sentence[0]);
         printf("%s",sentence);
        printf("\n");



    }
}


*/

/*
int main(){
    char* towns[]={"baku","istanbul","sumqayit","celiabbad","susa","zengilan","xocali","xocavend","xankendi","agoglan"};
    int n=sizeof(towns)/sizeof(towns[0]);
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(strcmp(towns[j],towns[j+1])>0){
                char* temp=towns[j];
                towns[j]=towns[j+1];
                towns[j+1]=temp;

            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%s\n",towns[i]);
    }
}


*/

/*
void reverse(char *str){
    char temp;
    int length=strlen(str);
    for(int i=0;i<length/2;i++){
        temp=str[i];
        str[i]=str[length-i-1];
        str[length-i-1]=temp;
    }
}


int main(){
    char str[100],*tokenptr;
    printf("enter the string");
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    tokenptr=strtok(str," ");

    while(tokenptr!=NULL){
        reverse(tokenptr);
        printf("%s\n",tokenptr);
        tokenptr=strtok(NULL," ");
    }
}


*/


/*
#define N 3
#define M 3
void fillarr(int row,int col,int arr[row][col]){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            arr[i][j]=rand()%5;

        }
    }
}

void printarr(int row,int col,int arr[row][col]){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%4d",arr[i][j]);
        }
        puts("");
    }
}

void summofm(int row,int col,int arr[row][col],int array[row][col],int summ[row][col]){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
             summ[i][j]=arr[i][j]+array[i][j];
        }
    }

}



int main(){
    int arr[N][M];
    int array[N][M];
    int summ[N][M];
    fillarr(N,M,arr);
    printarr(N,M,arr);
    puts("----");
    fillarr(N,M,array);
    printarr(N,M,array);
    puts("----");
    summofm(N,M,arr,array,summ);
    printarr(N,M,summ);

}

*/




