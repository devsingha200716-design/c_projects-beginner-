// n should be odd 

    //1.NUM & ALPHA                                                                             2

                                                                        //NORMAL
                                                        //i) Number

// #include <stdio.h>
// int main() {
//     int n; // n should be odd
//     printf("Enter the number: ");
//     scanf("%d", &n);

//     int nsp = n / 2; // spaces
//     int nst = 1;     // numbers in a row
//     int ml = n / 2 + 1; // middle line

//     for (int i = 1; i <= n; i++) {
//         // print spaces
//         for (int s = 1; s <= nsp; s++)
//             printf("  ");

//         // print numbers in reverse
//         int start_num = (nst == 1) ? 1 : nst; // largest number in row
//         for (int j = 1; j <= nst; j++) {
//             printf("%d", start_num);
//             if (j < nst) printf(" ");
//             start_num--; // decrement number
//         }

//         printf("\n");

//         // update spaces and number of elements
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


                                                   //ii)Alphabet

// #include <stdio.h>

// int main() {
//     int n; // n should be odd
//     printf("Enter the number: ");
//     scanf("%d", &n);

//     int nsp = n / 2; // spaces
//     int nst = 1;     // number of alphabets in a row
//     int ml = n / 2 + 1; // middle line

//     for (int i = 1; i <= n; i++) {
//         // print spaces
//         for (int s = 1; s <= nsp; s++)
//             printf("  ");

//         // print alphabets in reverse
//         char start_char = 'A' + nst - 1; // largest alphabet for this row
//         for (int j = 1; j <= nst; j++) {
//             printf("%c", start_char);
//             if (j < nst) printf(" ");
//             start_char--; // decrement
//         }

//         printf("\n");

//         // update space & stars (elements)
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


//                                                                   //EVEN & ODD
//                                                     //Number
// #include <stdio.h>

// int main() {
//      int n; // n should be odd
//      printf("Enter the number: ");
//      scanf("%d", &n);
//     int nsp = n / 2;
//     int nst = 1;
//     int ml = n / 2 + 1;

//     for (int i = 1; i <= n; i++) {
//         // print spaces
//         for (int s = 1; s <= nsp; s++)
//             printf("  ");

//         // print numbers in reverse
//        // int start_num = (nst == 1) ? 1 : nst * 2 - 1; // largest odd number in row
//        int start_num = (nst == 1) ? 1 : nst * 2 ; // largest evennumber in row
//         for (int j = 1; j <= nst; j++) {
//             printf("%d", start_num);
//             if (j < nst) printf(" ");
//             start_num -= 2; // decrement by 2 for odd numbers
//         }

//         printf("\n");

//         // update spaces and number of elements
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


                                                    //Alphabet

// #include<stdio.h>
// int main() {
//     int n; // n should be odd
//     printf("Enter the number: ");
//      scanf("%d", &n);
//     int nsp = n / 2;
//     int nst = 1;
//     int ml = n / 2 + 1;

//     for (int i = 1; i <= n; i++) {
//         // print spaces
//         for (int s = 1; s <= nsp; s++)
//             printf("  ");

//         // print letters in reverse
//         char start_char;
//         if (nst == 1) {
//            // start_char = 'A'; //odd
//               start_char = 'B'; //even
//         } else {
//             // calculate the largest letter for the current row
//             //start_char = 'A' + (nst - 1) * 2;        //ODD
//               start_char = 'B' + (nst - 1) * 2;        //EVEN
//         }

//         for (int j = 1; j <= nst; j++) {
//             printf("%c", start_char);
//             if (j < nst) printf(" ");
//             start_char -= 2; // decrement by 2 for odd letters
//         }

//         printf("\n");

//         // update spaces and number of elements
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
