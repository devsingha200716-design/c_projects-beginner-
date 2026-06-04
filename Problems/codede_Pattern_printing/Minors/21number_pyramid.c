#include<stdio.h>
int main(){
int n ;
printf("Enter the no :");
scanf("%d",&n);
int no =1;
int nsp=n-1;
for(int i=1;i<=n;i++){
    for(int s = 1; s<=nsp; s++){
    printf("  ");}
    
    for(int j=1; j<=no; j++){
        printf("%d ",j);
       
    }

    no=no+2;
    nsp =nsp-1;
    printf("\n");
}

    return 0;
}