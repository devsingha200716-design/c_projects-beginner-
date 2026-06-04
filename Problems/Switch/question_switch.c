#include<stdio.h>//wap to input day number(1-7) and print day of day name 
int main(){
    int n;
    printf("\nEnter Day number(1-7): ");
    scanf("%d",&n);
    switch(n){
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thurusday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("saturday");
            break;
        case 7:
            printf("Sunday");
            break;
        default:
            printf("Invalid Number");
    }

    return 0;
}

// Calculator
#include<stdio.h>   //if-else
int main(){
    int a;
    scanf("%d",&a);
    char ch;
    scanf("%c",&ch);
    int b;
    scanf("%d",&b);

    if(ch=='+')
       printf("%d",a+b);
    if(ch=='-')
       printf("%d",a-b);
    if(ch=='*')
       printf("%d",a*b);
    if(ch=='/')
       printf("%f",(float)a/b);    //tycasting
    if(ch=='%')
       printf("%d",a%b);
    return 0;
}
#include<stdio.h>   //switch case
int main(){
    int a;
    scanf("%d",&a);
    char ch;
    scanf("%c",&ch);
    int b;
    scanf("%d",&b);

switch(ch){
    case '+':
        printf("%d",a+b);
        break;
    case '-':
        printf("%d",a-b);
        break;
    case '*':
        printf("%d",a*b);
        break;
    case '/':
        printf("%f",(float)a/b);
        break;
    case '%':
        printf("%d",a%b);
        break;
    default:
        printf("Invalid Operator");
   }
    return 0;
}
