#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
int main(){
    // int a=sizeof(int);
    // int a=sizeof(float);
    // int a=sizeof(char);
    // int a=sizeof(double);
    // int a=sizeof(_Bool);
    // int a=sizeof(bool);
    // int a=sizeof(long);
    // printf("%d",a);

    // int* ptr =(int*) malloc(10*sizeof(int));
    // ptr++;
    // ptr++;
    // // int* ptr =(int*) Calloc(10,sizeof(int));
    // printf("%d",*ptr);

    // int x;
    // int* ptr =&x;
    // printf("%p",ptr);//address of x
    int* ptr =NULL;
    printf("%p",ptr);//address of NULL


    return 0;
}
#include<stdio.h>//Take n integer input and print them
#include<stdlib.h>
int main(){
   int n;
   printf("Enter the number of integer you want: ");
   scanf("%d",&n);
   int* ptr =(int*) malloc(n*sizeof(int));
// int* ptr =(int*) calloc(n,sizeof(int));
    int* p=ptr;
    for(int i=0;i<n;i++){
        scanf("%d",&(*ptr));
        ptr++;
    }
    int* t=p;
    for(int i=0;i<n;i++){
        printf("%d ",*p);
        p++;
    }
    free(ptr);//memory deallocation
    ptr,p,t=NULL;
    return 0;
}
#include<stdio.h>
#include<stdlib.h>
int main(){
    int* ptr =(int*) malloc(5*sizeof(int));
    int*p =ptr;
    ptr++;
    free(p);
    return 0;
}
//re-allocation

#include<stdio.h>
#include<stdlib.h>
int main(){
    
    return 0;
}



