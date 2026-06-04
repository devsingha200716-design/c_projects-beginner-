//step 1
#include<stdio.h>
int main(){ 
    int n;
    printf(" Enter the no.  :");
    scanf("%d",&n);
for( int i =1 ; i<=n ;i++){  
    for(int j=1; j<=n;j++){ 
        printf("* ");
} 
    printf("\n");
}
    return 0;
}

// // step 2
// // #include<stdio.h>
// // int main(){ 
// //     int n;
// //     printf(" Enter the no.  :");
// //     scanf("%d",&n);
// // for( int i =1 ; i<=n ;i++){  
// //     for(int j=1; j<=n;j++){ 
// //     if(j==n/2+1 || i==n/2+1) //n/2+1 = 3 for n=5,when int
// //     printf("*");
// //     else printf("#");
    
       
// // } 
// //     printf("\n");
// // }
// //     return 0;
// // }
// //step 3

// #include<stdio.h>
// int main(){ 
//     int n;
//     printf(" Enter the no.  :");
//     scanf("%d",&n);
// for( int i =1 ; i<=n ;i++){  
//     for(int j=1; j<=n;j++){ 
//     if(j== n/2+1|| i==n/2+1)
//     printf("*");
//     else printf(" ");
    
       
// } 
//     printf("\n");
// }
//     return 0;
// }