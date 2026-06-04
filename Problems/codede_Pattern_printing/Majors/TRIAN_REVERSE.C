//TRIANGLE                                                                                                   1
//NUMBER


// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a no of r & c is :");
//     if (scanf("%d", &n) != 1) return 1;
//     for(int i = 1; i <= n; i++) // rows
//     {
//         for(int j = i; j >= 1; j--) {  // print i down to 1
//             printf("%d ", j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

//NEXT


// #include<stdio.h>
// int main(){
//   int n;
//   printf(" Enter the no.  :");
//   scanf("%d",&n);
  
// for( int i =1 ; i<=n ;i++){ 
//      for(int j = i; j >= 1; j--){ 
//         printf("%d ", j);
   
// }

//     printf("\n");

// }
//     return 0;
// }


// //ALPHABET


// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the r & c is : ");
//     scanf("%d",&n);
//     for(int i = 1; i <= n; i++)
//     {
//         char ch = 'A' + i - 1; // start from A+i-1 (A, B, C...)
//         for(int j = i; j >= 1; j--) {
//             printf("%c ", ch);
//             ch--; // go down towards 'A'
//         }
//         printf("\n");
//     }


//     return 0;
// }

//ULTA TRIANGLE                                                                                                 2
//NUMBER

// #include<stdio.h>
// int main(){
//   int n;
//   printf(" Enter the no.  :");
//   scanf("%d",&n);
//       int nsp=n-1;
// for( int i =1 ; i<=n ;i++){ 
//     for(int s=1;s<=nsp;s++){
//    printf("  ");
// }
//       for(int j = i; j >= 1; j--) {
//           printf("%d ", j);
//       }
//        nsp--;
//     printf("\n");

// }
//     return 0;
// }

//NEXT
// #include<stdio.h>
// int main(){
//   int n;
//   printf(" Enter the no.  :");
//   scanf("%d",&n);
//       int nsp=n-1;
  
// for( int i =1 ; i<=n ;i++){ 
//         for(int s=1;s<=nsp;s++){
//          printf("  ");
// }
//      for(int j = i; j >= 1; j--){
//         printf("%d ", j);
   
// }
//        nsp--;
//     printf("\n");

// }
//     return 0;
// }

//ALPHABET


// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the r & c is : ");
//     scanf("%d",&n);
//       int nsp=n-1;
//     for(int i=1;i<=n;i++)
// {
//           for(int s=1;s<=nsp;s++){
//               printf("  ");
// }

// char ch = 'A' + i - 1;
//     for(int j = i; j >= 1; j--){
//         printf("%c ", ch);
//         ch--;
//     }
//        nsp--;
//     printf("\n");
// }


//     return 0;
// }
                                                                                                          


//INVERTED TRIANGLE                                                                                       3

//NUMBER


// #include<stdio.h>

// int main() {
//     int n;
//     printf("Enter n: ");
//     scanf("%d",&n);

//     for(int i = n; i >= 1; i--) {

//         for(int j = i; j >= 1; j--) {
//             printf("%d ", j);
//         }

//         printf("\n");
//     }

//     return 0;
// }



// //ALPHABET


// #include<stdio.h>

// int main() {
//     int n;
//     printf("Enter n: ");
//     scanf("%d",&n);

//     for(int i = n; i >= 1; i--) {

//         char ch = 'A' + i - 1;

//         for(int j = i; j >= 1; j--) {
//             printf("%c ", ch);
//             ch--;
//         }

//         printf("\n");
//     }

//     return 0;
// }



// //ULTA INVERTED TRIANGLE                                                                                 4

// //NUMBER

// #include<stdio.h>

// int main() {
//     int n;
//     printf("Enter n: ");
//     scanf("%d",&n);

//     int nsp = 0;

//     for(int i = n; i >= 1; i--) {

//         for(int s = 1; s <= nsp; s++)
//             printf("  ");

//         for(int j = i; j >= 1; j--) {
//             printf("%d ", j);
//         }

//         nsp++;
//         printf("\n");
//     }

//     return 0;
// }

//ALPHABET

// #include<stdio.h>

// int main() {
//     int n;
//     printf("Enter n: ");
//     scanf("%d",&n);

//     int nsp = 0;

//     for(int i = n; i >= 1; i--) {

//         for(int s = 1; s <= nsp; s++)
//             printf("  ");

//         char ch = 'A' + i - 1;
//         for(int j = i; j >= 1; j--) {
//             printf("%c ", ch);
//             ch--;
//         }

//         nsp++;
//         printf("\n");
//     }

//     return 0;
// }