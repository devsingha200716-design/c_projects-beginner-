#include<stdio.h>
#include<math.h>

double division();
double modulus();
void print_menu();

int main(){
    int choice;
    double first,second,result;
    printf("\n\n--------------------GETS(*~*)READY--------------------\n");

while(1){
    print_menu();
    scanf("%d",&choice);
    if(choice==7) break;
    if(choice<1 || choice>7){
        fprintf(stderr,"\n---------------------------------\nInvalid Menu Choice(Choose again)|\n---------------------------------\n");
        continue;
    }
    printf("Enter the First Number: ");
    scanf("%lf",&first);
    printf("Enter the Second Number: ");
    scanf("%lf",&second);


    switch(choice)
    {
        case 1: 
            result =first + second;
            break;
        case 2:
            result =first - second;
            break;
        case 3:
            result =first * second;
            break;
        case 4:
            result =division(first, second);
            break;
        case 5:
            result =modulus((int)first, (int)second);
            break;
        case 6:
            result =pow(first,second);
            break;
    }
if(!isnan(result)){
printf("\n------------------------------------------------------\n");
printf("The result of the Operation: %.2f",result);
printf("\n------------------------------------------------------\n\n");
}
}
printf("\n\n---------------------GAME(*~*)END----------------------\n");

    return 0;
}

double division(double a, double b){
    if(b==0) {
    printf("\n------------------------------------------------------\n");
    fprintf(stderr,"Invalid Argument for Division");
    printf("\n------------------------------------------------------\n\n");
    return NAN;
}
    else return a/b;
}
double modulus(int a, int b){
    if(b==0) {
    printf("\n------------------------------------------------------\n");
    fprintf(stderr,"Invalid Argument for Modulus");
    printf("\n------------------------------------------------------\n\n");
    return NAN;
}
    else {
        return a % b;
    }
}
void print_menu(){
    printf("\nWelcome to simple calculator\n");
    printf("Choose one of the following options:");
    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiply");
    printf("\n4. Divide");
    printf("\n5. Modulus");
    printf("\n6. Power");
    printf("\n7. Exit\n\n");

    printf("Now, enter your choice: ");
}





#include<stdio.h>
#include<math.h>

double division(double a, double b){
    if(b==0) {
    fprintf(stderr,"\nInvalid Argument for Division\n\n");
    return NAN;
    }
    else return a/b;
}
double modulus(int a, int b){
    if(b==0) {
    fprintf(stderr,"\nInvalid Argument for Modulus\n\n");
    return NAN;
    }
    // return (double)(a % b);
    else return (double)(a % b);
}

int print_menu_n_choice(int choice){
    printf("\n-----------------*Welcome to simple calculator*--------------------\n");
    printf("Choose one of the following options:");
    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiply");
    printf("\n4. Divide");
    printf("\n5. Modulus");
    printf("\n6. Power");
    printf("\n7. Exit\n\n");
    printf("Now, enter your choice: ");
    scanf("%d",&choice);
    return choice;
}

int main(){
    int choice;
    double first,second,result;
while(1){
    choice=print_menu_n_choice(choice);
    if(choice == 7){
    printf("Ending the game...\n");
    return 0;
    }
    if(choice<1 || choice>7){
        fprintf(stderr,"Invalid Menu choice\n");
        continue;
        // break;
    }
    printf("Enter the First Number: ");
    scanf("%lf",&first);
    printf("Enter the Second Number: ");
    scanf("%lf",&second);


    switch(choice)
    {
        case 1: 
            result =first + second;
            break;
        case 2:
            result =first - second;
            break;
        case 3:
            result =first * second;
            break;
        case 4:
            result =division(first, second);
            break;
        case 5:
            result =modulus(first,second);
            break;
        case 6:
            result =pow(first,second);
            break;
    }
    if(!isnan(result)) printf("The result of the Operation: %.2f\n",result);
    }
        return 0;
    }





