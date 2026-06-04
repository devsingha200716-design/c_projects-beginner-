#include<stdio.h>//factorial(1)
int factorial(int n){
    if(n==1 || n==0) return 1;
    // int res =n*factorial(n-1);
    // return res;
    return n*factorial(n-1); 

}
int main(){
    int number;
    printf("Enter the factorial number that you want: ");
    scanf("%d",&number);
    int fact =factorial(number);
    printf("%d",fact);

    return 0;
}

#include<stdio.h>//decreasing(2)
void greet(int x){
    if(x==0) return;
    printf("Good Morning\n");
    greet(x-1);
    return;
}


int main(){
    int number;
    printf("Enter the number that you want: ");
    scanf("%d",&number);
    greet(number);

    return 0;
}

#include<stdio.h>//..................
void decreasing(int x){
    if(x==0) return;
    printf("%d\n",x);
    decreasing(x-1);
    return;
}


int main(){
    int number;
    printf("Enter the number that you want: ");
    scanf("%d",&number);
    decreasing(number);
    
    return 0;
}

#include<stdio.h>//by post decrea.............
void decreasing(int x){
    if(x==0) return;
    printf("%d\n",x);
    x--;
    decreasing(x);
    return;
}


int main(){
    int number;
    printf("Enter the number that you want: ");
    scanf("%d",&number);
    decreasing(number);
    
    return 0;
}



#include<stdio.h>//incraesing(3)
void increasing(int start_number,int number){
    if(start_number>number) return;
    printf("%d\n",start_number);
    increasing(start_number+1,number);
    return;
}


int main(){
    int start_number =1;
    int number;
    printf("Enter the number that you want: ");
    scanf("%d",&number);
    // increasing(start_number,number);
    increasing(1,number);
    
    return 0;
}

#include<stdio.h>//.................................after recursive call
void increasing(int start_number,int number){
    if(start_number>number) return;//base case
    printf("%d\n",start_number);//code
    increasing(start_number+1,number);//call//1,2,3,3,2,1
    printf("%d\n",start_number);//code

    return;
}


int main(){
    int start_number =1;
    int number;
    printf("Enter the number that you want: ");
    scanf("%d",&number);
    increasing(start_number,number);
    
    return 0;
}


#include<stdio.h>//..................3,2,1,1,2,3
void decreasing(int x){
    if(x==0) return;
    printf("%d\n",x);
    decreasing(x-1);
    printf("%d\n",x);
    return;
}


int main(){
    int number;
    printf("Enter the number that you want: ");
    scanf("%d",&number);
    decreasing(number);
    
    return 0;
}



#include<stdio.h>//by void
void sum(int n){
    int sum =0;
    for(int i=1;i<=n;i++){
        sum =sum+i;
    }
    printf("%d ",sum);
    return;
}
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    sum(n);
    return 0;
}

#include<stdio.h>///by int 
int add(int n){
    int sum =0;
    for(int i=1;i<=n;i++){
        sum =sum+i;
    }
   
    return sum;
}
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int a= add(n);
    printf("%d",a);
    return 0;
}


#include<stdio.h>//by main
void sum(int n,int add){
    if(n==0) {
       printf("%d",add);
       return ;
    }
    sum(n-1,add+n);
    return;
}
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    sum(n,0);
    return 0;
}

#include<stdio.h>//by factorial
void sum(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum +i;
    }
    printf("%d",sum);
    return;
}
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    sum(n);
    return 0;
}

#include<stdio.h>//factorial(1)
int sum(int n){
    if(n==1 || n==0) return 1;
    // int res =n*sum(n-1);
    // return res;
    return n+sum(n-1); 

}
int main(){
    int number;
    printf("Enter the factorial number that you want: ");
    scanf("%d",&number);
    int fact =sum(number);
    printf("%d",fact);

    return 0;
}

#include<stdio.h>//Make a function which calculate 'a' raised to the power 'b' using recursion//by loop(7)
int power(int a, int b){
    int p=1;
    for(int i=1;i<=b;i++){
        p=p*a;
    }
    return p ;
}
int main(){
    int a;
    printf("Enter the main number: ");
    scanf("%d",&a);
    int b;
    printf("Enter the power number: ");
    scanf("%d",&b);
    int p= power(a,b);
    printf("%d raised to the power %d: %d",a,b,p);
    return 0;
}

#include<stdio.h>//Make a function which calculate 'a' raised to the power 'b' using recursion//by recursion
int power(int a, int b){
    if(b==0) return 1;
    int recAns =a*power(a,b-1);
    return recAns;
}
int main(){
    int a;
    printf("Enter the main number: ");
    scanf("%d",&a);
    int b;
    printf("Enter the power number: ");
    scanf("%d",&b);
    int p= power(a,b);
    printf("%d raised to the power %d: %d",a,b,p);
    return 0;
}

#include<stdio.h>//Make a function which calculate 'a' raised to the power 'b' using logrithm//by recursion
int powerlog(int a, int b){
    if(b==1) return a;
    int x=powerlog(a,b/2);
    if(b%2==0){
        return x*x;
    }
    if(b%2!=0){
        return x*x*a;
    }
}
int main(){
    int a;
    printf("Enter the main number: ");
    scanf("%d",&a);
    int b;
    printf("Enter the power number: ");
    scanf("%d",&b);
    int p= powerlog(a,b);
    printf("%d raised to the power %d: %d",a,b,p);
    return 0;
}
#include<stdio.h>//..............XXXXX
float powerlog(int a,int b){
    if(b==1) return a;
    if(b==0)return 1;
    float x=powerlog(a,b/2);
    return x*x;
}
int main(){
    int a;
    printf("Enter the main number: ");
    scanf("%d",&a);
    int b;
    printf("Enter the power number: ");
    scanf("%d",&b);
    float p= powerlog(a,b);
    printf("%d raised to the power %d: %f",a,b,p);
    return 0;
}

#include<stdio.h>//FIBBONACCI//by recursion//(8)
int fibo(int n){
    if (n==1|| n==2) return 1;
    int ans1 =fibo(n-1);
    int ans2 =fibo(n-2);
    int ans =ans1 + ans2;
    return ans;
    // return fibo(n-1) + fibo(n-2);
}
int main(){
    int a;
    printf("Enter the main number: ");
    scanf("%d",&a);
    printf("%d",fibo(a));
    return 0;
}

#include<stdio.h>//stair path included 1,2(9)
int stair(int n){
    if(n<=2) return n;
    int totalways = stair(n-1)+stair(n-2);
    return totalways ;
}
int main(){
    int a;
    printf("Enter the main number: ");
    scanf("%d",&a);
    int way= stair(a);
    printf("%d",way);
    return 0;
}

#include<stdio.h>//stair path included 3
int stair(int n){
    if(n==1) return 1;
    if(n==2) return 2;
    if(n==3) return 4;
    int totalways = stair(n-1)+stair(n-2)+stair(n-3);
    return totalways ;
}
int main(){
    int a;
    printf("Enter the main number: ");
    scanf("%d",&a);
    int way= stair(a);
    printf("%d",way);
    return 0;
}

