// //step

// #include<stdio.h>
// int main(){
//     int n ;
//     printf("Enter numbers: ");
//     scanf("%d", &n);
//     for(int i = 1; i <= n; i++){
       
//         for(int j = 1; j <= n; j++){
           
           
//             if(i+j==n+1){
//               char ch = 'A';

//               for(int k = 1; k <= i; k++) { 
//               printf("%c ",ch);
//               ch++;
//               }
//             }
 
             
           
//             else {printf("  ");} // two spaces
           
//       }
//    printf("\n");
//     }
//     return 0;
// }

//step 2


#include<stdio.h>

int main() {
    int n;
    printf("Enter rows: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {

        // Step 1: Print leading spaces
        for(int s = 1; s <= n - i; s++) {
            printf("  ");   // 2 spaces
        }

        // Step 2: Print alphabets
        char ch = 'A';
        for(int j = 1; j <= i; j++) {
            printf("%c ", ch);
            ch++;
        }

        printf("\n");
    }
    
    return 0;
}



