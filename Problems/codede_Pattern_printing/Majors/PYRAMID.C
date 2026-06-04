                                                                                // 1. // (star)
                                                                                //IN NORMAL ALIGNMENT
                                                             


#include<stdio.h>
int main(){
int n ;
printf("Enter the no :");
scanf("%d",&n);
int no =1; 
int nsp=n-1;
for(int i=1;i<=n;i++){
    for(int s = 0; s<=nsp; s++){
    printf(" ");}
    
    for(int j=1; j<=no; j++){
        printf("*");
       
    }

   no=no+2;//odd alignment
    // no=no+1;//even alignment
    nsp =nsp-1;
    printf("\n");
}

    return 0;
}


                                                                               //  IN EVEN/ODD ALIGNMENT





                                                                // //with math


// #include<stdio.h>
// int main() {
//     int n;
//     printf("Enter no : ");
//     scanf("%d", &n);  
//      //int a =1; //odd alignment
//      int a=2; //even alignment
//        for(int i = 1; i <= n; i++) {


//             for(int s = 1; s <= n - i; s++) {
//                  printf(" "); }
    

//             for(int j = 1; j <=a;j++) {
//                 printf("*");
//     }   
//         a =a+2;
//         printf("\n");
//     }   
//     return 0;
// }

                                                                 // //without math

// #include<stdio.h>
// int main() {
//     int n;
//     printf("Enter no : ");
//     scanf("%d", &n);  
//      //int nst=1; // odd alignment
//      int nst=2; // even alignment

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






                                                                                                    //1 Normal in normal alignment

                                                                                // i) // numbers




#include<stdio.h>
int main(){
int n;
printf("Enter n: ");
scanf("%d",&n);

int no = 1;
int nsp = n-1;

for(int i=1; i<=n; i++){

    for(int s=1; s<=nsp; s++){
        printf(" ");
    }

    int a = 1;
    for(int j=1; j<=no; j++){
        printf("%d ", a);
        a++;
    }

    nsp--;
    // no=no+2;
    no += 1;   
    printf("\n");
}

return 0;
}



                                                                              // ii) // alphabets



// #include<stdio.h>
// int main(){
// int n;
// printf("Enter n: ");
// scanf("%d",&n);
// int no = 1;
// int nsp = n - 1;

// for(int i=1; i<=n; i++){

//     for(int s=1; s<=nsp; s++){
//         printf("  ");
//     }

//     char ch = 'A';

//     for(int j=1; j<=no; j++){
//         printf("%c ", ch);
//         ch++;
//     }

//     nsp--;
//     no += 1;
//   
//     printf("\n");
// }

// return 0;
// }




                                                                                   // 2 NORMAL IN EVEN AND OODD ALIGNMENTt



                                                                  // i) // number







// #include<stdio.h>
// int main(){
// int n;
// printf("Enter n: ");
// scanf("%d",&n);

// int no = 1; //odd a;lignment
// //int no = 2;//even alignment

// int nsp = n-1;

// for(int i=1; i<=n; i++){

//     for(int s=1; s<=nsp; s++){
//         printf(" ");
//     }

//     int a = 1;
//     for(int j=1; j<=no; j++){
//         printf("%d ", a);
//         a++;
//     }

//     nsp--;
//     no=no+2;
   
//     printf("\n");
// }

// return 0;
// }

                       

                                                                                // ii) // alphabets



// #include<stdio.h>
// int main(){
// int n;
// printf("Enter n: ");
// scanf("%d",&n);

// int no = 1;// odd alignment
// int no = 2;// even alignment
// int nsp = n - 1;

// for(int i=1; i<=n; i++){

//     for(int s=1; s<=nsp; s++){
//         printf("  ");
//     }

//     char ch = 'A';

//     for(int j=1; j<=no; j++){
//         printf("%c ", ch);
//         ch++;
//     }

//     nsp--;
//     no += 2;
//   
//     printf("\n");
// }

// return 0;
// }













                                                                                                    // 3 even in even alignment and 
                                                                                                     ///odd in odd alignment


                                                                                    // i) // numbers



// #include <stdio.h>
// int main(){
//     int n;
//     printf("Enter n: ");
//     scanf("%d",&n);
//     int nsp = n - 1;   /*int nsp = n - i;  then no need of nsp--; */
//     for(int i = 1; i <= n; i++){

//        //int no= 2*i; //(even alignment)
//        int no= 4*i-1; //(odd alignment)


//         for(int s = 1; s <= nsp; s++) 
//             printf(" ");

//         //int a =2;     //even
//        int a =1;        //odd
//        //for(int k = 1; k <= no; k++){   //even
//        for(int k = 1; k <= 2*i-1; k++){    //odd
//            // printf("%d",a );   // even numbers
//              printf("%d",a);   // odd numbers
//              a+=2;
//             if(k < 2*i) printf(" ");
//         }
//         nsp--;
//         printf("\n");
//     }

//     return 0;
// }



                                                                                      // ii) // alphabets

// #include <stdio.h>
// int main() {
//     int n;
//     printf("Enter n: ");
//     scanf("%d", &n);
//     // int no = 1;  // odd alignment
//     int no = 2;   // even alignment
//     int nsp = n - 1;

//     for (int i = 1; i <= n; i++) {

//         for (int s = 1; s <= nsp; s++) printf(" ");

//         char ch = 'B';  // 2 → B (even alphabet)

//         for (int j = 1; j <= no; j++) {
//             printf("%c ", ch);
//             no += 2;   // even alphabet sequence
//         }

//         nsp--;
//         printf("\n");
//     }
//     return 0;
// }




                                                                                                     //  4 odd in even alignment and 
                                                                                                    ///evenin odd alignment



                                                                                    // i) // numbers



// #include <stdio.h>
// int main() {
//     int n;
//     scanf("%d", &n);
//    int nsp = n - 1;// odd in even alignment
//     //int nsp = n*2-1;   // even in odd alignment
//     //int no = 1;// even in odd alignment
//     int no = 2;   // odd in even alignment
//     for (int i = 1; i <= n; i++) {

//         for (int s = 1; s <= nsp; s++) printf(" ");

//         int x = 1;// odd in even alignment
//         //int x = 2;   // even in odd alignment
//         for (int j = 1; j <= no; j++) {
//             printf("%d ", x);
//             x += 2;
//         }
//          no += 2;   // both odd & even alignment
//        nsp--;// odd in even alignment
//        // nsp -= 2;   
//         printf("\n");
//     }
//     return 0;
// }




                                                                                     //alphabet


// #include <stdio.h>
// int main() {
//     int n;
//     scanf("%d", &n);
//     int nsp = n - 1;
//     //int no = 2;   // odd in even alignment
//     int no = 1;   // even in odd alignment

//     for (int i = 1; i <= n; i++) {

//         for (int s = 1; s <= nsp; s++) printf(" ");

//         //char ch = 'A';// odd in even alignment
//         char ch = 'B';   // even in odd alignment
//         for (int j = 1; j <= no; j++ ){
//             printf("%c ", ch);
//             ch += 2;
//         }
//         no += 2;   // both  alignment
//         nsp--;
//         printf("\n");
//     }
//     return 0;
// }