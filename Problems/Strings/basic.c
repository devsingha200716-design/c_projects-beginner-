// A=65,a=97,'0'=48,'9'=57,\0=0
// printf("Type the text : ");
// fgets(text,sizeof(text),stdin);
//strcmp

#include<stdio.h>
int main(){
    char ch='a';
    int x=(int)ch;
    printf("%d",x);
    // printf("%d",ch);

    return 0;
}



#include<stdio.h>
int main(){
    char arr[3]={'a','s','d'};
    printf("%c",arr[0]);
    return 0;
}

#include<stdio.h>
int main(){
    char arr[]="hello";
    arr[0]='f';
    arr[1]=65;
    int i=0;
    while(arr[i]!='\0'){
        // printf("%c",arr[i]);
        //OR
        // printf("%c",i[arr]);
        //OR
        // printf("%c",*(i+arr));
        //OR
        printf("%c",*(arr+i));
        i++;
    }

    printf("\n%c",arr[4]);

    return 0;
}



#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
    gets(str);
    puts(str);
    // puts("hello beta");
}


//Note:- size
        // in "string" extra space/size add ('\0)
        // in "size & stren" no extra size.

#include<stdio.h>//size
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
   printf("Size is %d",size);

    return 0;
}

#include<stdio.h>//reverse
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
    for(int i=0,j=size-1;i<j;i++,j--){//imp
        char temp =str[i];
        str[i]=str[j];
        str[j]=temp;

    }
   puts(str);

    return 0;
}

#include<stdio.h>//shallow copy
#include<string.h>
    int main(){
    char s1[40];
    puts("Type the string : ");
    gets(s1);
    char* s2= s1;
    // s1[0]='c';
    // s2="dollege";
    // printf("%s\n",s1);
    printf("%s",s2);
return 0;
}

#include<stdio.h>//deepcopy
#include<string.h>
int main(){
    char s1[40];
    puts("Type the string : ");
    gets(s1);
    int size =0;
    int i=0;
    while(s1[i]!='\0'){
        size++;
        i++;
    }
    char s2[size];
    for(int i=0;i<=size;i++){
        s2[i]=s1[i];
    }
    printf("%s",s2);
return 0;
}



#include<stdio.h>//build in function
#include<string.h>//strlen = lenght
int main(){
    // char* s1="physic";
    char str[40];
    puts("Type the string : ");
    gets(str);
    int x=strlen(str);
    printf("%d",x);
return 0;
}


#include<stdio.h>
#include<string.h>//strcpy
int main(){
    char str[40];
    puts("Type the string : ");
    gets(str);
    int x=strlen(str);
    char s2[x];
    strcpy(s2,str);
    // s2[0]='g';
    // str[0]='j';
    // printf("%s\n",str);
    printf("%s",s2);
return 0;
}

#include<stdio.h>
#include<string.h>//strcat
int main(){
    char s1[30];
    puts("Type the first string : ");
    gets(s1);
    char s2[30];
    puts("Type the second string : ");
    gets(s2);
  
    strcat(s1,s2);
    printf("%s",s1);
return 0;
}



#include<stdio.h>
#include<string.h>//inserting a char in a string
int main(){
    char str[40];
    puts("Type the string : ");
    // fgets(str,sizeof(str),stdin);
    scanf("%s",str);
    // gets(str);
    
    int k;
    puts("Type the limits : ");
    scanf("%d",&k);

    int x =strlen(str);

    for(int i=x;i>=k;i--){//imp
        str[i+1]=str[i];
    }
    char rand1;
    puts("Type the random letter : ");
    scanf(" %c",&rand1);//important    "_%c"
    str[k]=rand1;
    printf("%s",str);
return 0;
}










