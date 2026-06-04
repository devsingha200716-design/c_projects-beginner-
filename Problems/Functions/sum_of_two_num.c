#include<stdio.h>
int add(int x,int y){
    return x + y;
}
int main(){
    int a;
    printf("Enter the a : ");
    scanf("%d",&a);
    int b;
    printf("Enter the b : ");
    scanf("%d",&b);
    int sum = add(a,b);
    printf("the sum is : %d",sum);
    return 0;
}


// using function prototype


#include<stdio.h>

int main(){
    int a;
    printf("Enter the a : ");
    scanf("%d",&a);
    int b;
    printf("Enter the b : ");
    scanf("%d",&b);
    int add(int x,int y);
    int sum = add(a,b);
    printf("the sum is : %d",sum);
    return 0;
}

int add(int x,int y){
    return x + y;
}
