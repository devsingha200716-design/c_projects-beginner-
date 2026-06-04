//simple star pyramid(2space for alignment)
//#include<stdio.h>
// int main(){
//     int n ;
//     printf("Enter numbers: ");
//     scanf("%d", &n);
//     for(int i = 1; i <= n; i++){
       
//         for(int j = 1; j <= n; j++){
           
           
//             if(i+j==n+1){
//              // char ch = 'A';

//               for(int k = 1; k <= i; k++) { printf("* ");
//             //ch++;
//         }}
 
             
           
//             else {printf("   ");}
           
//       }
//    printf("\n");
//     }
//     return 0;
// }

// simple star pyramid(1 space for alignment)


// #include<stdio.h>
// int main() {
//     int n;
//     printf("Enter rows: ");
//     scanf("%d", &n);

//     for(int i = 1; i <= n; i++) {

//         // Step 1: Print leading spaces
//         for(int s = 1; s <= n - i; s++) {
//             printf(" ");   // 2 spaces
//         }

//         // Step 2: Print *
        
//         for(int j = 1; j <= i; j++) {
//             printf("* ");//space
           
//         }

//         printf("\n");
//     }
    
//     return 0;
// }

// step 1

// #include<stdio.h>
// int main() {
//     int n;
//     printf("Enter no : ");
//     scanf("%d", &n);

//     for(int i = 1; i <= n; i++) {
//         for(int j = 1; j <=(2*i-1);j++) {
//               printf("* ");
            
            
//         }
//         printf("\n");
//     }   
//     return 0;
// }

// odd tringle star pyramid(2spaces for alignment)
// c
// // // real with math


#include<stdio.h>
int main() {
    int n;
    printf("Enter no : ");
    scanf("%d", &n);  
     int a =1;
       for(int i = 1; i <= n; i++) {


            for(int s = 1; s <= n - i; s++) {
                 printf(" "); }
    

            for(int j = 1; j <=a;j++) {
                printf("*");
    }
        a =a+2;
        printf("\n");
    }   
    return 0;
}

// //without math

// #include<stdio.h>
// int main() {
//     int n;
//     printf("Enter no : ");
//     scanf("%d", &n);  
//      int nst=1; 
//      int nsp=n-1;


//        for(int i = 1; i <= n; i++) {


//             for(int s = 1; s <= nsp; s++) {
//                  printf(" ");
            
//                 }
//            for(int j = 1; j <=nst;j++) {
//                 printf("*");
//     }   nsp--;
//         nst =nst+2;
//         printf("\n");
//     }   
//  return 0;
// }


