
#include<stdio.h>
int main(){
    void fun();
    fun();
    return 0;
}
void fun(){
    printf("Helo yaar\n");
    return;
}



// void fun()   

// fun();   //function

// void fun();  //prototype
// fun();



 




#include<stdio.h>
void australia(){
    printf("You are in Australia\n");   //4
    void england(); //calling england    //5
    england();
    return; //8
}
    void england(){
        printf("You are in england\n"); //6
        return; //7
    }


int main(){ //Alway first start from main function
    void india(); // calling india   // 1
    india();
    
    return 0;   //10
}
void india(){
    printf("You are in India\n"); //2
    void australia(); // calling australia   //3
    australia();
    return; //9
}