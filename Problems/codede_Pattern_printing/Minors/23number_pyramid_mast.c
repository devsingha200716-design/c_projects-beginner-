#include<stdio.h>
int main(){
int n;
printf("enter the no : ");
scanf("%d",&n);
int no =1;
int nsp =n-1;
 
for( int i =1; i<=n;i++){
   
    for( int s=1; s<=nsp;s++){
        printf(" ");}
         nsp--;
    for(int j=1;j<=no;j++){
        printf("%d",j);}
         no++;
    int a=i-1;
    for(int k=1;k<=i-1;k++){
        printf("%d",a);
        a--;
    }
  printf("\n");
}

    return 0;
}

// same as for alpha

// #include<stdio.h>
// int main(){
// int n;
// printf("Enter the no :" );
// scanf("%d",&n);
// int no =1;
// int nsp =n-1;
// for(int i=1;i<=n;i++){
//     for(int s =1; s<=nsp;s++){
//         printf(" ");}
//         nsp--;
//         char ch='A';
//     for(int j =1; j<=no; j++){
//         printf("%c",ch);
//         ch++;}
//         no++;
//         char b = ch-2;
//     for(int k=1;k<=i-1;k++){
       
//         printf("%c",b);
//         b--;}
   





//     printf("\n");
// }
//     return 0;
// }