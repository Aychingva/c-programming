
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>

/*task1
int main(){
    char s[100];
    fgets(s,100,stdin);




    //printf("%d",strlen(s));
    for(int i=0;i<strlen(s)-1;i++){
        if((isupper(s[i]))){
            s[i]=tolower(s[i]);
        }else{
            s[i]=toupper(s[i]);
        }
    }
    printf("%s",s);
    printf("%d",'a');
    return 0;
    


}
*/


//task2
/*
int main(){
    const int nums=6;
    char inpstring[10],*ptrstring;
    double total=0;
    for(int i=0;i<nums;i++){
        scanf("%s",inpstring);
        printf("%s",inpstring);
        total+=strtod(inpstring,&ptrstring);
        printf("you entered +(int)>> %0.lf\n",total);

    }
    printf("%s",inpstring);
}

*/
//task 3
/*
int main(){
    const int num=6;
    char s1[10],*ptr;
    float total=0;
    for(int i=0;i<num;i++){
        scanf("%s",s1);
        total+=strtod(s1,&ptr);
       
        printf("you entered int>>%lf",total);
    }

}


*/


//task4 
/*
int main(){
    char s1[30]="hello", s2[10]="world";
    printf("strlen(s1)>>%d",strlen(s1));
    printf("strlen(s2)>>%d",strlen(s2));
    printf("str1 %s str2 %s",s1,s2);
    strcat(s1,s2);
    puts("----");
    printf("strlen(s1)>>%d",strlen(s1));
    printf("str1 %s str2 %s",s1,s2);

}

*/

//task5
/*

int main(){
    char s1[20],s2[10];
    printf("enter the s1",s1);
    fgets(s1,sizeof(s1),stdin);

    printf("enter the s2",s2);
    fgets(s2,sizeof(s2),stdin);

    int count;
    printf("enter the count;");
    scanf("%d",&count);

    strncat(s1,s2,count);
    printf("strlen(s1) is %d\n",strlen(s1));
    printf("%s",s1);
}
*/


//task6
/*
 int main(){
    char s1[100];
    printf("enter the s1 ;");
    fgets(s1,sizeof(s1),stdin);
    int vowels=0;
    int consonants=0;
    int space=0;
    int digits=0;
    for(int i=0;s1[i]!='\0';i++){
        char ch=tolower(s1[i]);
        if(isalpha(ch)){
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
                vowels++;

            }else{
                consonants++;
            }
        }else if(isdigit(ch)){
            digits++;
        }else if(isspace(ch)){
            space++;
        }
    }
    printf("%d\n",vowels);
    printf("%d\n",consonants);
    printf("%d\n",space);
    printf("%d\n",digits);
    return 0;

 }

*/


//task 7
/*
int main(){
    char s1[100];
    
    
    while(1){
      
        printf("enter the s1 ;");
        fgets(s1,sizeof(s1),stdin);
        s1[strcspn(s1, "\n")] = '\0';
        if(strcmp(s1,"exit")==0){
            break;
        }

    
        if(strncmp(s1,"th",2)==0){
            printf("starting start with th",s1);
        }else{
            printf("doesnt start with th");
            

        }
    }
return 0;
}
*/

//task 8


// int main(){
//     char s1[100];
    
    
//     while(1){
      
//         printf("enter the s1 ;");
//         fgets(s1,sizeof(s1),stdin);
//         s1[strcspn(s1, "\n")] = '\0';
//         if(strcmp(s1,"exit")==0){
//             break;

//         }else if(strcmp(s1+strlen(s1)-4,"tion")==0){
//             printf("%s",s1);


//         }else{
//             printf("false");
//         }
//     }
// }








//task 10
/*
#include<stdlib.h>
#include<time.h>
int random(){
    return rand()%5;
}


int main(){
    srand(time(NULL));
    //char sentence[100]="";
    char* article[5]={"the","a","one","some","any"};
    char* noun[5]={"boy","girl","dog","town","car"};
    char* verb[5]={"drove","jumped","ran","walked","skipped"};
    char* pre[5]={"to","from","over","under","on"};
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
        strcat(sentence,".");
        sentence[0]=toupper(sentence[0]);
        printf("%s",sentence);
        printf("\n");
    }
   

    return 0;

    


}

*/
//task 11

/**/
// void selection_sort(char *array[]){
//     for(size_t i=0;i<9;i++){
//         int min=i;
//         for(size_t j=i+1;j<10;j++){
//             if(strcmp(array[j],array[min])<0){
//                 min=j;

//             }
//             char *temp=array[i];
//             array[i]=array[min];
//             array[min]=temp;
        
//         }
//     }
// }


// void printarray(char*array[]){
//     for(size_t i=0;i<10;i++){
//         printf("%s\n",array[i]);
//     }
// }





// int main(){
//     char *s1[30]={"astara","lankaran","ganja","baku","guba","qabala","minjagevir","naxchivan","caliabad","agdam"};
//     printarray(s1);
//     selection_sort(s1);
//     puts("----");
//     printarray(s1);

// }



/*
int main(){
    char str1[20]="Hello ",str2[7]="World";
printf("strlen(str1);%d\n",strlen(str1));
printf("strlen(str2);%d\n",strlen(str2));
printf("str1;%s\n str2;%s",str1,str2);
strcat(str1,str2);

puts("\nafter");
printf("strlen(str1);%d\n",strlen(str1));
printf("strlen(str2);%d\n",strlen(str2));
printf("str1 %s",str1);
printf("%s",str2);
return 0;



}
*/

/*
int main(){
    char str1[20];
    char str2[20];
    int count;
    printf("enter the str1;");
    fgets(str1,sizeof(str1),stdin);
    //str1[strcspn(str1 ,"\n")] = '\0';
    printf("enter the str2;");
    fgets(str2,sizeof(str2),stdin);
    printf("enter the number of charachter");
    scanf("%d",&count);
    strncat(str1,str2,count);
    puts("after");
    printf("last str1 is %s",str1);
    printf("strlen(str1) %d",strlen(str1));
}
*/













/*

int main(){
    char s1[30]="25.36453 world",*ptr;
    double total;
    total=strtod(s1,&ptr);
    printf("%lf",total);
    puts("---");
    printf("%s",ptr);
    

}

*/

































/*
int main(){
    int num=514,*ptr=&num;
    char*n=(char*)&num;
    printf("memory add of num %p\n",ptr);
    printf("memory add of n %p\n",n);

    printf("val num%d\n",num);
    printf("val n %d\n",*n);
}
*/






#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// #define str_size 100 //Declare the maximum size of the string
// #define chr_no 255 //Maximum number of characters to be allowed

// void main()
// {
//     char str[str_size];
// 	int ch_fre[chr_no];
//     int i = 0, max;
//     int ascii;
	
//        printf("\n\nFind maximum occurring character in a string :\n");
//        printf("--------------------------------------------------\n"); 	
//        printf("Input the string : ");
//        fgets(str, sizeof str, stdin);


//     for(i=0; i<chr_no; i++)  //Set frequency of all characters to 0
//     {
//         ch_fre[i] = 0;
//     }


//     /* Read for frequency of each characters */
//     i=0;
//     while(str[i] != '\0')
//     {
//         ascii = (int)str[i];
//         ch_fre[ascii] += 1;

//         i++;
//     }

//     max = 0;
//     for(i=0; i<chr_no; i++)
//     {
//         if(i!=32)
//         {
//         if(ch_fre[i] > ch_fre[max])
//             max = i;
//         }
//     }	
//     printf("The Highest frequency of character '%c' appears number of times : %d \n\n", max, ch_fre[max]);
// }


int main(){
   
    char s1[100];
    int count=0;
    char arr[5][10];
    
    int i=0;
    while(count!=5){
      
        printf("enter the s1 ;");
        fgets(arr[i],sizeof(arr),stdin);
        i++;
        count++;
        s1[strcspn(s1, "\n")] = '\0';

        for(int i)

        // if(strcmp(s1,"exit")==0){
        //     break;

        // }else if(strcmp(s1+strlen(s1)-4,"tion")==0){
        //     printf("%s",s1);


        // }else{
        //     printf("false");
        // }
    }

}













