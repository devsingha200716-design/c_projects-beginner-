#include<stdio.h>
int main(){
    int n;
    printf("Enter the r & c is : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
{

char a='A';
    for(int i=1;i<=n;i++){
        printf("%c ",a);
        a++;
    }
    printf("\n");
}


    return 0;
}