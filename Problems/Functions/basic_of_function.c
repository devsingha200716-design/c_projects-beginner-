// #include<stdio.h>
// void greet(){//greet is function name/ external function
//     printf("Good Morning\n");
//     printf("How are you\n");
//     return;
// }
// int main(){ //Alway first start from main function
//     greet();//calling a function/call/ calling greet
//     greet();//call
//     return 0;
// }








#include<stdio.h>
void england(){
    printf("You are in england\n"); //6
    return; //7
}
void australia(){
    printf("You are in Australia\n");   //4
    england(); //calling england    //5
    return; //8
}
void india(){
    printf("You are in India\n"); //2
    australia(); // calling australia   //3
    return; //9
}
int main(){ //Alway first start from main function
    india(); // calling india   //1
    return 0;   //10
}