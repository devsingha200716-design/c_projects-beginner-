// 1. // plus


// step 1

#include<stdio.h>
int main(){ 
    int n;
    printf(" Enter the no.  :");
    scanf("%d",&n);
for( int i =1 ; i<=n ;i++){  
    for(int j=1; j<=n;j++){ 
    if(j==n/2+1 || i==n/2+1) //n/2+1 = 3 for n=5,when int
    printf("*");
    else printf("#");
    
       
} 
    printf("\n");
}
    return 0;
}

//step 2

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


// 2. // CROSS


//     

// 3. // HOLLOW RECTANGLE


// #include<stdio.h>
// int main(){
//     int n;
//   printf(" Enter the no.  :");
//   scanf("%d",&n);
//   int m;
//   printf(" Enter the no.  :");
//   scanf("%d",&m);

// for( int i =1 ; i<=n;i++){ 
//      for(int j=1; j<=m;j++){ 

//   if(i == 1 || j == 1 ||i==n ||j==m) printf("*");
//   else printf(" ");
      
// } 
//     printf("\n");
// }
//     return 0;
// }


// 4. // RHOMBUS



// #include<stdio.h>
// int main(){
//     int n, m;
//     printf("Enter rows: ");
//     scanf("%d", &n);
//     printf("Enter columns: ");
//     scanf("%d", &m);

//     for(int i = 1; i <= n; i++){

//         // print spaces
//         for(int s = 1; s <= n - i; s++){
//             printf("  ");   // 2 spaces for alignment
//         }

//         // print stars
//         for(int j = 1; j <= m; j++){
//             printf("*");
//         }

//         printf("\n");
//     }

//     return 0;
// }



