

// pointer is very important




#include<stdio.h>//SWAP
void swap(int*a,int*b){
int temp = *a;
*a =*b;
*b=temp;
return;
}
int main(){
int x=45;
int y =54;
swap(&x,&y);
printf("Value of x is %d\n",x);
printf("Value of y is %d",y);

    return 0;
}



#include<stdio.h>
int main(){
int a =2;
int*x =&a;
int**y =&x;
int***z =&y;
***z=4;//or  a=4, *x=4, **y=4
printf("%p\n",&a);//knowing address of itself
printf("%p\n",&x);
printf("%p\n",&y);
printf("%p\n\n",&z);

printf("%p\n",x);//knowing address of others
printf("%p\n",*y);
printf("%p\n\n",**z);

printf("%d\n\n",a);//knowing value of itself

printf("%d\n",*x);//knowing value of others
printf("%d\n",**y);
printf("%d\n\n",***z);


    return 0;
}








