 
 
 
 //TRANGLE BY DEV                                        1



// #include<stdio.h>
// int main(){
//   int n;
//   printf(" Enter the no.  :");
//   scanf("%d",&n);
   
// for( int i =1 ; i<=n ;i++){ 
//    char a= 'D';
//    char b= 'E';
//    char c= 'V';
//     for(int j=1; j<=i;j++){ 
//         printf("%c%c%c ",a,b,c);
  
// }  
    

//     printf("\n");

// }
//     return 0;
// }



 
 
 
 
 
 
   // //NUMBER and ALPHA {triangle)                     2

// #include<stdio.h>
// int main() {
//     int n;
//     printf("Enter the no.: ");
//     scanf("%d", &n);
//     int nsp = n-1;
//     for (int i = 1; i <= n; i++) {
//         for(int s=1;s<=nsp;s++){
//         printf(" ");}
//         if (i % 2 == 1) { 
//             // ODD row → numbers
//             for (int j = 1; j <= i; j++) {
//                 printf("%d ", j);
//             }
//         } else { 
//             // EVEN row → characters
//             char ch = 'A';
//             for (int j = 1; j <= i; j++) {
//                 printf("%c ", ch);
//                 ch++;
//             }
//         }
//         nsp--;
//         printf("\n");
//     }

//     return 0;
// }


         // //binary rectangle                                 3




#include<stdio.h>
int main(){
    int n;
    printf("Enter the no: ");
    scanf("%d",&n);

    for(int i = 1; i <= n; i++){

        int a;
        if(i % 2 == 1) 
            a = 1;   // odd row starts with 1
        else 
            a = 0;   // even row starts with 0

        for(int j = 1; j <= n; j++){
            printf("%d ", a);
            a = 1 - a;   // flip (1->0 / 0->1)
        }

        printf("\n");
    }

    return 0;
}



   //binart triangle                                                4


// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the no: ");
//     scanf("%d",&n);
//     int nsp=n-1;
//     for(int i = 1; i <= n; i++){
//         for(int s=1;s<=nsp;s++)
// {
//     printf(" ");
// }
//         int a;
//         if(i % 2 == 1) 
//             a = 1;   // odd row starts with 1
//         else 
//             a = 0;   // even row starts with 0

//         for(int j = 1; j <= i; j++){
//             printf("%d ", a);
//             a = 1 - a;   // flip/ (1->0 / 0->1)
//         }
//         nsp--;
//         printf("\n");
//     }

//     return 0;
// }



  // number pyramid must                                               5




// #include<stdio.h>
// int main(){
// int n;
// printf("enter the no : ");
// scanf("%d",&n); 
// int no =1;
// int nsp =n-1;
 
// for( int i =1; i<=n;i++){
   
//     for( int s=1; s<=nsp;s++){
//         printf(" ");}
//          nsp--;
//     for(int j=1;j<=no;j++){
//         printf("%d",j);}
//          no++;
//     int a=i-1;
//     for(int k=1;k<=i-1;k++){
//         printf("%d",a);
//         a--;
//     }
//   printf("\n");
// }

//     return 0;
// }




  // alpha pyramid must                                                     6



// #include<stdio.h>
// int main(){
// int n;
// printf("Enter the no :" );
// scanf("%d",&n);
// int no =1;
// int nsp =n-1;
// for(int i=1;i<=n;i++){
//     for(int s =1; s<=nsp;s++){
//         printf(" ");}
//         nsp--;
//         char ch='A';
//     for(int j =1; j<=no; j++){
//         printf("%c",ch);
//         ch++;}
//         no++;
//         char b = ch-2;
//     for(int k=1;k<=i-1;k++){
       
//         printf("%c",b);
//         b--;}
   





//     printf("\n");
// }
//     return 0;
// }


