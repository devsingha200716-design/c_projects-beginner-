    // TRAINGLE                                                                                             1

//STAR

// #include<stdio.h>
// int main(){
// int n;
// printf("Enter a no of r & c is :");
// scanf("%d",&n);
// for(int i=1;i<=n;i++) //columns
// { 
//      for(int j=1; j<=i;j++){  //rows
//     printf("1 ");
 
// }
//     printf("\n");

// }
//     return 0;
// }


//NUMBEER


// #include<stdio.h>
// int main(){
//   int n;
//   printf(" Enter the no.  :");
//   scanf("%d",&n);
// for( int i =1 ; i<=n ;i++){ 
//      for(int j=1; j<=i;j++){ 
//         printf("%d ",j);
// }
   
// // for( int i =1 ; i<=n ;i++){ 
// //     int a=1;
// //      for(int j=1; j<=i;j++){ 
// //         printf("%d ",a);
// //         a++;  
// // } 

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
//     for(int i=1;i<=n;i++)
// {

// char a='A';
//     for(int j=1;j<=i;j++){
//         printf("%c ",a);
//         a++;
//     }
//     printf("\n");
// }


//     return 0;
// }



     //ulta triangle                                                                                                   2

//star


// #include<stdio.h>
// int main(){
// int n;
// printf("Enter a no of r & c is :");
// scanf("%d",&n);
// int nsp =n-1;
// for(int i=1;i<=n;i++) {//columns
//        for(int s=1; s<=nsp;s++){
//            printf("  ");
//        }
//      for(int j=1; j<=i;j++){  //rows
//     printf("1 ");
 
// }    nsp--;
//     printf("\n");

// }
//     return 0;
// }


//NUMBEER


// #include<stdio.h>
// int main(){
//   int n;
//   printf(" Enter the no.  :");
//   scanf("%d",&n);
//       int nsp=n-1;
// for( int i =1 ; i<=n ;i++){ 
//     int a=1;//1
//     for(int s=1;s<=nsp;s++){
//    printf("  ");
// }
// // for(int j=1; j<=i;j++){ //2
// //  printf("%d ",j);//2
// for(int j=1; j<=i;j++){ //1
//    printf("%d ",a);//1
//    a++;//1

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
//       char a='A';
// {
//     for(int s=1;s<=nsp;s++){
//         printf("  ");
// }
//     for(int j=1;j<=i;j++){
//         printf("%c ",a);
//         a++;
//     }
//        nsp--;
//     printf("\n");
// }


//     return 0;
// }
                                                                                                          




        //inverted TRIANGLE                                                                                          3

      //STAR

// #include<stdio.h>
// int main() {
//     int n;
//     printf("Enter n: ");
//     scanf("%d",&n);

//     for(int i = n; i >= 1; i--) {
//         for(int j = 1; j <= i; j++) {
//             printf("* ");
//         }
//         printf("\n");
//     }

//     return 0;
// }




#include<stdio.h>
int main() {
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int nsp=0;   
    for(int i = 1; i <= n; i++) {
        for(int j = i; j <= n; j++) {
            printf("* ");
        }
        for(int s= 1; s <= nsp; s++) {
            printf(" ");
        }

        nsp++;
        printf("\n");
    }

    return 0;
}






// NUMBER


// #include<stdio.h>

// int main() {
//     int n;
//     printf("Enter n: ");
//     scanf("%d",&n);

//     for(int i = n; i >= 1; i--) {

//         int x = 1;        // number start hamesha 1

//         for(int j = 1; j <= i; j++) {
//             printf("%d ", x);
//             x++;
//         }

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

//     for(int i = n; i >= 1; i--) {

//         char ch = 'A';      // alphabet start hamesha A

//         for(int j = 1; j <= i; j++) {
//             printf("%c ", ch);
//             ch++;
//         }

//         printf("\n");
//     }

//     return 0;
// }









  // ulta INVERTED TRIANGLE                                                                                       4




//STAR

// #include<stdio.h>
// int main() {
//     int n;
//     printf("Enter n: ");
//     scanf("%d",&n);

//     int nsp = 0;   // starting space

//     for(int i = n; i >= 1; i--) {

//         for(int s = 1; s <= nsp; s++)
//             printf("  ");   // 2 spaces for shape

//         for(int j = 1; j <= i; j++)
//             printf("* ");

//         nsp++;   // increase space every row

//         printf("\n");
//     }

//     return 0;
// }


//NUMBER

// #include<stdio.h>

// int main() {
//     int n;
//     printf("Enter n: ");
//     scanf("%d",&n);

//     int nsp = 0;

//     for(int i = n; i >= 1; i--) {

//         for(int s = 1; s <= nsp; s++)
//             printf("  ");

//         int x = 1;
//         for(int j = 1; j <= i; j++) {
//             printf("%d ", x);
//             x++;
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

//         char ch = 'A';
//         for(int j = 1; j <= i; j++) {
//             printf("%c ", ch);
//             ch++;
//         }

//         nsp++;
//         printf("\n");
//     }

//     return 0;
// }

                




  