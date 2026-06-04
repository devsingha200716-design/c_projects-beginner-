 // // 2.i) // number(real) :. where n is rows and m is columns

// #include<stdio.h>
// int main(){
// int n;
// printf("Enter the no rows: ");
// scanf("%d",&n);
// int m;  
// printf("Enter the no columns: ");
// scanf("%d",&m);
//  for( int i=1;i<=n;i++){
//     int a=4;  // for odd numbers
// // int a=2;  // for even numbers
//     for(int j=1;j<=m;j++){
//         printf("%d ",a);
//         a--;
//     }
//  printf("\n");
//  }

//     return 0;

// }

// ii) // number(odd/even) :. where n is rows and m is columns



// odd

#include<stdio.h>
int main(){
int n;
printf("Enter the no rows: ");
scanf("%d",&n);
int m;  
printf("Enter the no columns: ");
scanf("%d",&m);
 for( int i=1;i<=n;i++){
    int a=2*m-1;  // for odd numbers
    for(int j=1;j<=m;j++){
        printf("%d ",a);
        a-=2;
    }
 printf("\n");
 }

    return 0;

}

// EVEN VERSION

// #include<stdio.h>
// int main(){
// int n;
// printf("Enter the no rows: ");
// scanf("%d",&n);
// int m;  
// printf("Enter the no columns: ");
// scanf("%d",&m);
//  for( int i=1;i<=n;i++){
//     int a=2*m;  // for even numbers
//     for(int j=1;j<=m;j++){
//         printf("%d ",a);
//         a-=2;
//     }
//  printf("\n");
//  }
// 
//     return 0;
// 
// }



// Alphabet(REAL) :. where n is rows and m is columns




// #include<stdio.h>
// int main(){
// int n;
// printf("Enter the no rows: ");
// scanf("%d",&n);
// int m;  
// printf("Enter the no columns: ");
// scanf("%d",&m);
//  for( int i=1;i<=n;i++){
//     char a= 'A'+(m-1);
//     for(int j=1;j<=m;j++){
//         printf("%c ",a);
//         a--;
//     }
//  printf("\n");
//  }

//     return 0;
// }



// ii) // Alphabet(odd&even) :. where n is rows and m is columns




// ODD
// #include<stdio.h>
// int main(){
// int n;
// printf("Enter the no rows: ");
// scanf("%d",&n);
// int m;  
// printf("Enter the no columns: ");
// scanf("%d",&m);
//  for( int i=1;i<=n;i++){
//     char a='A'+(2*m-1);  // for odd letters
//     for(int j=1;j<=m;j++){
//         printf("%c ",a);
//         a-=2;
//     }
//  printf("\n");
//  }

//     return 0;
// }

// EVEN
// #include<stdio.h>
// int main(){
// int n;
// printf("Enter the no rows: ");
// scanf("%d",&n);
// int m;  
// printf("Enter the no columns: ");
// scanf("%d",&m);
//  for( int i=1;i<=n;i++){
//     char a='A'+(2*m);  // for even letters
//     for(int j=1;j<=m;j++){
//         printf("%c ",a);
//         a-=2;
//     }
//  printf("\n");
//  }
// 
//     return 0;
// }




