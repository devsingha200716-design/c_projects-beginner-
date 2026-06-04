// 0,1,2,3....,\n,\0

//scanf(" %c",&variable)//#space

// #include<string.h>
// #include<ctype.h>---->toupper/tolower

//taking input
#include<stdio.h>
#include<string.h>
int main(){
    char text [10];//imp
    // X//char text [];//imp
    scanf("%s",text);
    puts(text);
    return 0;
}



//string(1)

// "str"(double quets)---> always end with"\0" (\0->mark the end of the string as semicolon end of statement)
// 's','t','r'(sing quotes)--> put atend "\0"
//pointers in string (cant modified) and strings(modified)



//string memory allocation(2)
//cont memory and fixed size




// string Initialisation(3)
#include<stdio.h>
#include<string.h>
int main(){
    char text [10]={'H','e','l','l','o','\0'};
    char text []={'H','e','l','l','o','\0'};
    char text [10]="Hello";
    char text []="Hello";
    
    puts(text);
    return 0;
}

//format specifier(4)

//scanf("%s",variable);
//printf("The variable is: %s",variable);

#include<stdio.h>
#include<string.h>
int main(){
    char text [10];
    printf("Please enter the name: ");
    scanf(" %3s",text);//imp
    printf("Entered name is: %s ",text);
    return 0;
}

//input/output(5)

//output - *printf,puts(+(easy(simple,no format specifier))-(\n))
//input -   scanf(-(space,limit)),gets(+(space)-(limit,not preferable)),*fgets(+(limit,space)-(\n))

//pointers in string (cant modified) and strings(modified)(6)
#include<stdio.h>
#include<string.h>
int main(){
    char text[]="Hello";
    printf("Array : Before modifying an array: %s\n",text);
    text[1]='l';
    printf("Array : Modified an array: %s\n",text);
    
    char *next="Hello";
    printf("Pointer : Before modifying an array: %s\n",next);
    next[1]='l';
    printf("Pointer : Modified an array: %s\n",next);
    return 0;

}

//string.h(7)

//1)strlen(string lenth)  2)strcpy  3)strcspn(String Complement Span)  4)strcat(concatination)    5)strcmp(compare)
#include<stdio.h>//strlen(      + '\n',        -'\0')
#include<string.h>                                           
int main(){
    char name [50];
    printf("Please enter the name: ");
    fgets(name,sizeof(name),stdin);
    
    int size =strlen(name);
    printf("Size is %d",size);
    return 0;
}



#include<stdio.h>//strcpy
#include<string.h>                                           
int main(){
    char name [50];
    printf("Please enter the name: ");
    fgets(name,sizeof(name),stdin);
    name[strcspn(name,"\n")]='\0';//strcspn
    char new_name [50];
    strcpy(new_name,name);
    printf("%s has been copied to %s",name,new_name);
   
    
}


#include<stdio.h>//strcat
#include<string.h>                                           
int main(){
    char first_name [50];
    printf("Please enter the name: ");
    fgets(first_name,sizeof(first_name),stdin);
    first_name[strcspn(first_name,"\n")]='\0';
    char surname [50];
    printf("Please enter the surname: ");
    fgets(surname,sizeof(surname),stdin);
    surname[strcspn(surname,"\n")]='\0';
    
    strcat(first_name,surname);
    printf("The full name is %s",first_name);
   
    
}

#include<stdio.h>//strcmp//imp
#include<string.h>                                           
int main(){
   int result = strcmp("apple","banana");
   printf("comparing'Apple' with 'banana': %d\n",result );
   result = strcmp("cherry","banana");
   printf("comparing 'cherry' with 'banana': %d\n",result );
   result = strcmp("date","date");
   printf("comparing'date' with 'date': %d\n",result );

}
//or


#include<stdio.h>//9
#include<string.h>
int main(){
    printf("welcome to secure system \n\n");
    const char stored_password []="pa$$word";
    char password[50];
    while(1){
        printf("enter the password : ");
        scanf("%s",password);
        if(strcmp(password,stored_password)==0){
            break;
        }
    }

    // do{
    //     printf("\nPlease type the correct password : ");
    //     scanf("%s",password);
    // } 
    
    // while(strcmp(password,stored_password)!=0);
    
    printf("\n Access Granted\n\n");
    return 0;
}

//2d array(8)
















#include<stdio.h>//1
#include<string.h>
int main(){
    printf("Read a line of text from the user using 'fgets' and then print it using 'puts'\n");
    char text[50];
    printf("Enter the text : ");
    fgets(text,sizeof(text),stdin);
    printf("The text you entered is : ");
    puts(text);

    return 0;
}

#include<stdio.h>//2
#include<string.h>
int main(){
    printf("Use 'printf' with 'format specifier' to format and print a date string(day,month,year) \n");
    char day[10];
    char month[10];
    int year;
    printf("Please, enter the day : ");
    scanf("%s",day);
    printf("Now, enter the Month : ");
    scanf("%s",month);
   
    printf("Finally, enter the Year : ");
    scanf("%d",&year);
    printf("The date is %s-%s-%d.",day,month,year);

    return 0;
}
#include<stdio.h>//3
#include<string.h>
#include<ctype.h>
int main(){
    printf("To convert a string to 'UPPERCASE'\n");
    char text[100];
    printf("Please, enter you text : ");
    fgets(text,sizeof(text),stdin);
    // for(int i=0;text[i]!='\0';i++){
    for(int i=0;i<strlen(text);i++){//with string .h(header file)
        text[i]=toupper(text[i]);
        // printf("The UPPERCASE of the string : %s",text);
    }
    printf("The UPPERCASE of the string : %s",text);
    return 0;
}

#include<stdio.h>//4
#include<string.h>
int main(){
    printf("User login system that compares a 'stored password' string using 'strcmp'\n");
    const char stored_password[]={"devsingha29112007!"};
    char password[40];
    printf("Enter the password : ");
    scanf("%s",password);
    if (strcmp(password,stored_password)==0){
        printf("Access granted to the system");
    }
    else{
        printf("Access denied to the system");

    }
   
    return 0;
}



#include<stdio.h>//5
#include<string.h>
int main(){
    printf("wELCOME TO SHOWING TIC-TK-TOE BOARD\n\n");
    char board[3][3]={{'X' ,'0' ,'X'},{'0' ,'X' ,'X'},{'X' ,'0' ,'X'}};



for(int i=0;i<3;i++){
    printf("\n");
    for(int j=0;j<3;j++){
        printf("%c",board[i][j]);
        if(j<2) printf(" | ");
    }
    if(i<2) printf("\n----------");
}




    // printf("%c | %c | %c\n",board[0][0],board[0][1],board[0][2]);
    // printf("----------\n");
    // printf("%c | %c | %c\n",board[1][0],board[1][1],board[1][2]);
    // printf("----------\n");
    // printf("%c | %c | %c",board[2][0],board[2][1],board[2][2]);

    return 0;
    }


#include<stdio.h>//6 
#include<string.h>
void reverse(char text[]){
    for(int i=0,j=strlen(text)-1;i<j;i++,j--){
        int temp =text[i];
        text[i]=text[j];
        text[j]=temp;

    }
    return;
}
int main(){
    puts("Reverse by function");
    char text[100];
    printf("Please, enter your text : ");
    fgets(text,sizeof(text),stdin);
    reverse(text);
    puts(text);

    return 0;
}




#include <stdio.h>//7
#include <string.h>

int main() {
    printf("Welcome to trimming first and last spaces of the string");
    char text[50];
    puts("Enter the text :");
    fgets(text, sizeof(text), stdin);

    // remove newline
    text[strcspn(text, "\n")] = '\0';//imp not required , its imp    

    int start = 0;
    int end = strlen(text) - 1;

    // remove leading spaces
    while (text[start] == ' ') {
        start++;
    }

    // remove trailing spaces
    while (text[end] == ' ') {
        end--;
    }

    // print trimmed string
    // show space as '-'
    for (int i = start; i <= end; i++) {
        // if (text[i] == ' ')
        //     printf("-");
        // else
            printf("%c", text[i]);
    }

    return 0;
}

#include<stdio.h>//8
#include<string.h>
int main(){
    printf("welcome to pallindrome string checker \n\n");
    char text[50];
    printf("Type the text : ");
    fgets(text,sizeof(text),stdin);
    text[strcspn(text,"\n")] ='\0';
    int palindrome  = 0;
    for (int i =0,j=strlen(text)-1;i<j;i++,j--){
        if(text[i]!=text[j]){
            palindrome=1;
            break;
        }
          
    }
    if (palindrome==0){
        printf("Its a palindrome");
    }  
    else if (palindrome ==1){
        printf("Its not palindrome");
    }
    



    return 0;
}



#include<stdio.h>//9
#include<string.h>
int main(){
    printf("welcome to secure system \n\n");
    const char stored_password []="pa$$word";
    char password[50];
    while(1){
        printf("Enter the password : ");
        scanf("%s",password);
        if(strcmp(password,stored_password)==0){
            break;
        }
    }




    // do{
    //     printf("\nPlease type the correct password : ");
    //     scanf("%s",password);
    // } 
    
    // while(strcmp(password,stored_password)!=0);
    printf("\n Access Granted\n\n");
    return 0;
}

#include<stdio.h>//10
#include<string.h>
int main(){
    printf("welcome to loop until exit \n\n");
    const char exit[]="exit";
    char command[40];
    // do{
    //  printf("Enter the command : ");
    //     scanf("%s",command);
    // }while (strcmp(command,exit)!=0);

    while(1){
        printf("Enter command : ");
        scanf("%s",command);
        if(strcmp(command,exit)==0){
            break;
        }
    }



    printf("Access granted to teh system ");

    return 0;
}