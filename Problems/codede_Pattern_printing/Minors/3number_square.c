#include<stdio.h>
int main(){
int n;
printf("Enter a no of r & c is :");
scanf("%d",&n);
for(int i=1;i<=n;i++) //columns
{ int a=1;
     for(int j=1; j<=n;j++){  //rows
    printf("%d ",a);
    a=a+1; 
   
}
    printf("\n");

}
    return 0;
}



// #include<stdio.h>
// int main(){
// int n;
// printf("Enter a no of r & c is :");
// scanf("%d",&n);
// for(int i=1;i<=n;i++) //columns
// { 
//      for(int j=1; j<=n;j++){  //rows
//     printf("%d ",j);
   
// }
//     printf("\n");

// }
//     return 0;
// }
