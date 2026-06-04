


                                                                             //1 Normal in NORMAL alignment

                                                                // i) // numbers



// #include<stdio.h>
// int main(){
// int n;
// printf("Enter n: ");
// scanf("%d",&n);5

// int no = 1;
//
// int nsp = n-1;
// Please unblock challenges.cloudflare.com to proceed.
// for(int i=1; i<=n; i++){

//     for(int s=1; s<=nsp; s++){
//         printf(" ");
//     }

//     int last = no;
//     for(int j=1; j<=no; j++){
//         printf("%d ", last);
//         last--;
//     }

//     nsp--;
//     no += 1;
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
// int no = 1;


// int nsp = n - 1;

// for(int i=1; i<=n; i++){

//     for(int s=1; s<=nsp; s++){
//         printf(" ");
//     }

//     char last = 'A' + no - 1;

//     for(int j=1; j<=no; j++){
//         printf("%c ", last);
//         last--;
//     }

//     nsp--;
//     no+=1;
//     printf("\n");
// }

// return 0;
// }







                                                                                   //4 NORMAL IN EVEN AND OODD ALIGNMENTt




                                                                // i) // numbers



// #include<stdio.h>
// int main(){
// int n;
// printf("Enter n: ");
// scanf("%d",&n);5

// int no = 1;//odd alignment
// int no = 2;//even alignment
// int nsp = n-1;
// Please unblock challenges.cloudflare.com to proceed.
// for(int i=1; i<=n; i++){

//     for(int s=1; s<=nsp; s++){
//         printf(" ");
//     }

//     int last = no;
//     for(int j=1; j<=no; j++){
//         printf("%d ", last);
//         last--;
//     }

//     nsp--;
//     no += 2;
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
// int no = 1;//odd alignment
// int no = 2;//even alignment

// int nsp = n - 1;

// for(int i=1; i<=n; i++){

//     for(int s=1; s<=nsp; s++){
//         printf(" ");
//     }

//     char last = 'A' + no - 1;

//     for(int j=1; j<=no; j++){
//         printf("%c ", last);
//         last--;
//     }

//     nsp--;
//     no+=2;
//     printf("\n");
// }

// return 0;
// }









                                                                                  // 3  even in even alignment and 
                                                                                   ////odd in odd alignment


                                                                 // i) // numbers

 


// #include <stdio.h>

// int main(){
//     int n;
//     printf("Enter n: ");
//     scanf("%d",&n);

//     for(int i = 1; i <= n; i++){

//         int nsp = n - i;
//         for(int s = 1; s <= nsp; s++) printf("  ");

//         //int count = 2*i;//even alignment
//         int count = 2*i - 1;//odd alignment

//         for(int k = count; k >= 1; k--){
//           //  printf("%d", 2*k);//even numbers
//             printf("%d", 2*k - 1);//odd numbers
            
//             if(k > 1) printf(" ");
//         }
//         printf("\n");
//     }
//     return 0;
// }


       


                



                                                                // ii) // alphabets




// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter n: ");
//     scanf("%d",&n);

//     //int no = 1;      // odd alignment
//     int no = 2;   // even alignment

//     int nsp = n - 1;

//     for(int i = 1; i <= n; i++){

//         for(int s = 1; s <= nsp; s++)
//             printf(" ");

//         // largest odd in alphabet
//         //int last = 2 * no - 1;        // A,C,E,G,...
//          int last = 2 * no;        // B,D,F,H,... (even alphabet)

//         for(int j = 1; j <= no; j++){
//             char ch = 'A' + (last - 1);   // convert number → alphabet
//             printf("%c ", ch);
//             last -= 2;
//         }

//         nsp--;
//         no += 2;   // odd / even alignment grow
//         printf("\n");
//     }

//     return 0;
// }




                                                                                    // 4 odd in even alignment and 
                                                                                    ///even in odd alignment



                                                                  // i) // numbers

// #include <stdio.h>
// int main() {
//     int n;
//     scanf("%d", &n);
//     int nsp = n - 1; 

//     for (int i = 1; i <= n; i++) {

        
//         //int no = 2 * i;   /*2*/       // number of elements in this row (2,4,6,...)
//         int no = 2 * i-1;   /*1*/       // number of elements in this row (1,3,5,...)
//         //int x = 4 * i - 1;       // starting odd for row i (3,7,11,...)
//         int x = 4 * i - 2;       // 

//         for (int s = 1; s <= nsp; s++) printf("  ");

//         for (int j = 0; j < no; j++) {
//             printf("%d", x - 2*j);
//             if (j < no - 1) printf(" ");
//         }
//         no+=2;
//         nsp--;
//         printf("\n");
//     }

//     return 0;
// }



                                                                   // ii) // alphabets




// #include <stdio.h>
// int main() {
//     int n;
//     scanf("%d", &n);
//     int nsp = n - 1;   
//     for (int i = 1; i <= n; i++) {
         
//          int no = 2 * i;/*int no =2*/          // number of alphabets in row (2,4,6,...)
//         //   int no = 1; /* int no= 2*i-1*/         // number of alphabets in row (1,3,5,...)
       

//         int x = 4 * i - 1;       // starting odd alphabet index (3,7,11,...)
//         //int x = 4 * i -2;//         //


//         for (int s = 1; s <= nsp; s++) 
//             printf(" ");

//         for (int j = 0; j < no; j++) {
//             char ch = 'A' + (x - 2*j - 1);   // convert number → alphabet
//             printf("%c", ch);

//             if (j < no - 1) printf(" ");
//         }
//         no+=2;
//         nsp--;
//         printf("\n");
//     }

//     return 0;
// }