//n should be odd number


  // 1. STAR                                                                                            1
// #include<stdio.h>
// int main(){
//     int n;// n is always odd
//     printf("Enter the no :" );
//     scanf("%d",&n);
//     int nsp = n - 1;//n/2;
//     int nst = 1;
//     int ml = n/2 + 1;
//     for(int i = 1; i<=n; i++){


//         for(int s=1; s<=nsp; s++){
//             printf(" ");}
           
//         for(int j=1; j<=nst; j++){
//             printf("*");}
          


//         if(i < ml){
//             nsp--;
//             nst +=2;
           
//         }
//         else{ nsp++;
//             nst -=2;
          
//         }

// //   nst+=2;
// //  nsp--;
//         printf("\n");
//     }

// return 0;
// }



//2.NUM & ALPHA                                                                                             2

                                                                        //NORMAL
                                                        //i) Number


//   #include<stdio.h>
// int main(){
//     int n; // n should be odd
//     printf("Enter the number: ");
//     scanf("%d", &n);

//     int nsp = n / 2; // spaces
//     int nst = 1;     // numbers in a row
//     int ml = n / 2 + 1; // middle line

//     for(int i = 1; i <= n; i++){
//         // print spaces
//         for(int s = 1; s <= nsp; s++){
//             printf("  ");
//         }

//         // print numbers
//         int num = 1;
//         for(int j = 1; j <= nst; j++){
//             printf("%d", num);
//             if(j < nst) printf(" "); // space between numbers
//             num++;
//         }

//         // update spaces and numbers
//         if(i < ml){
//             nsp--;
//             nst += 2;
//         } else {
//             nsp++;
//             nst -= 2;
//         }

//         printf("\n");
//     }

//     return 0;
// }


                                                      //ii)Alphabet

//#include<stdio.h>

// int main(){
//     int n; // n should be odd
//     printf("Enter the number: ");
//     scanf("%d", &n);

//     int nsp = n / 2; // spaces
//     int nst = 1;     // letters in a row
//     int ml = n / 2 + 1; // middle line

//     for(int i = 1; i <= n; i++){
//         // print spaces
//         for(int s = 1; s <= nsp; s++){
//             printf(" ");
//         }

//         // print letters
//         char ch = 'A';
//         for(int j = 1; j <= nst; j++){
//             printf("%c", ch);
//             if(j < nst) printf(" "); // space between letters
//             ch++;
//         }

//         // update spaces and letters
//         if(i < ml){
//             nsp--;
//             nst += 2;
//         } else {
//             nsp++;
//             nst -= 2;
//         }

//         printf("\n");
//     }

//     return 0;
// }


                                                                                // EVEN AND ODD
                                                               //i)Number

// #include <stdio.h>
// int main() {
//     int n; 
//     printf(" Enter the no");
//     scanf("%d",&n);
//     int nsp = n / 2;
//     int nst = 1;
//     int ml = n / 2 + 1;

//     for (int i = 1; i <= n; i++) {
//         for (int s = 1; s <= nsp; s++)
//             printf("  "); // spaces

//        // int num = 1; // odd numbers start from 1
//         int num = 2; // even numbers start from 2
//         for (int j = 1; j <= nst; j++) {
//             printf("%d", num);
//             if (j < nst) printf(" ");
//             num += 2;
//         }

//         printf("\n");

//         if (i < ml) {
//             nsp--;
//             nst += 2;
//         } else {
//             nsp++;
//             nst -= 2;
//         }
//     }

//     return 0;
// }

                                                                //ii Alphabet

// #include <stdio.h>

// int main() {
//      int n; 
//      printf(" Enter the no");
//      scanf("%d",&n);
//     int nsp = n / 2;
//     int nst = 1;
//     int ml = n / 2 + 1;

//     for (int i = 1; i <= n; i++) {
//         for (int s = 1; s <= nsp; s++)
//             printf("  ");

//         //char ch = 'A'; // odd letters
//         char ch = 'B'; // odd letters
//         for (int j = 1; j <= nst; j++) {
//             printf("%c", ch);
//             if (j < nst) printf(" ");
//             ch += 2;
//         }

//         printf("\n");

//         if (i < ml) {
//             nsp--;
//             nst += 2;
//         } else {
//             nsp++;
//             nst -= 2;
//         }
//     }

//     return 0;
// }
