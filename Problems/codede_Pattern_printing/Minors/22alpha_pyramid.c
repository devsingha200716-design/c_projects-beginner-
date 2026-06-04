#include<stdio.h>
int main(){
int n;
printf(" Enter the no : ");
scanf("%d",&n);
int nsp =n-1;
int no=1;

for(int i =1; i<=n ; i++){
    for(int s=1; s<=nsp;s++){
        printf("  ");}
    char ch='A';
        for(int j=1; j<=no;j++){
           printf("%c ",ch);
           ch++;}

   



    no = no+2;
    nsp--;
    printf("\n");
}


    return 0;
}