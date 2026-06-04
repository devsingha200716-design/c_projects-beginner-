//step 1
// #include<stdio.h>
// int main(){
//     int n;
//     printf(" Enter the no.  :");
//     scanf("%d",&n);
//     for( int i =1 ; i<=n ;i++){ 
//         for(int j=1; j<=n;j++){ 
//             if(i+j==n+1 || i ==n|| j == n) 
//              printf("*");
//             else printf(" ");
       
//     } 
//      printf("\n");

//     }
//  return 0;
// }

// step 2

#include<stdio.h>
int main(){
    int n;
    printf(" Enter the no.  :");
    scanf("%d",&n);
    for( int i =1 ; i<=n ;i++){ 
        for(int j=1; j<=n;j++){ 
            if(i+j>n) 
             printf("*");
            else printf(" ");
       
    } 
     printf("\n");

    }
 return 0;
}
