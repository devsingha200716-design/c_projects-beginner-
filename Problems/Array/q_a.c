#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
    puts("Type the string : ");
    gets(str);
    int i=0;
    int size =0;
    while(str[i]!='\0'){
        size++;
        i++;
    }
    printf("%d",size);


    return 0;
}

#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
    puts("Type the string : ");
    gets(str);
    int k=0;
    int size =0;
    while(str[k]!='\0'){
        size++;
        k++;
    }
    for(int i=0,j=size-1;i<j;i++,j--){
        int temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    puts(str);


    return 0;
}


#include<stdio.h>
#include<string.h>
int main(){
    char str [40];
    puts("Type the string : ");
    gets(str);
    int k;
    puts("Enter the limits : ");
    scanf("%d",&k);
    int x=strlen(str);
    for(int i =x;i>=k;i--){
        str[i+1]=str[i];
    }    
    char rand1;
    puts("Type the random letter : ");
    scanf(" %c",&rand1);
    str[k]=rand1;
    puts(str);

    return 0;
}



#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    puts("Type the string : ");
    gets(str);
    char* str2=str;
    printf("%s",str2);

    return 0;
}


#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    puts("Type the string : ");
    gets(str);
    int k=0;
    int size =0;
    while(str[k]!='\0'){
    size++;
    k++;
    }
    char str2[size];
    for(int i=0;i<=size;i++){
        str2[i]=str[i];
    }
    puts(str2);
    return 0;
}


#include<stdio.h>
#include<string.h>
int main(){
    char str[30];
    puts("Type the string : ");
    gets(str);
    int x =strlen(str);
    char str2[x];
    strcpy(str2,str);
    puts(str2);


    return 0;
}

#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
    puts("Enter the string : ");
    gets(str);
    int k=0;
    int size =0;
    while(str[k]!='\0'){
        size++;
        k++;
    }
   for(int i=0,j=size-1;i<j;i++,j--){
    int temp =str[i];
    str[i]=str[j];
    str[j]=temp;
   }
   puts(str);
    return 0;
}

#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
    puts("Enter the string : ");
    gets(str);
    int x= strlen(str);
    printf("%d",x);
    return 0;
}


#include<stdio.h>
#include<string.h>
int main(){
    char str1[40];
    puts("Enter the string : ");
    gets(str1);
    char str2[40];
    puts("Enter the string : ");
    gets(str2);
    strcat(str1,str2);
    puts(str1);
    return 0;
}





