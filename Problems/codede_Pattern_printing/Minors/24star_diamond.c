#include<stdio.h>
int main(){
    int n;// n is always odd
    printf("Enter the no :" );
    scanf("%d",&n);
    int nsp = n - 1;//n/2;
    int nst = 1;
    int ml = n/2 + 1;
    for(int i = 1; i<=n; i++){


        for(int s=1; s<=nsp; s++){
            printf(" ");}
           
        for(int j=1; j<=nst; j++){
            printf("*");}
          


        if(i < ml){
            nsp--;
            nst +=2;
           
        }
        else{ nsp++;
            nst -=2;
          
        }

//   nst+=2;
//  nsp--;
        printf("\n");
    }

return 0;
}


// hm

// #include<stdio.h>
// int main(){
//     int n;// n is always odd
//     printf("Enter the no :" );
//     scanf("%d",&n);
//     int nsp = 0;//n/2;
//     int nst = n;
//     // int ml = n/2 + 1;
//     for(int i = 1; i<=n; i++){


//         for(int s=1; s<=nsp; s++){
//             printf(" ");}
           
//         for(int j=1; j<=nst; j++){
//             printf("*");}
          


//         // if(i < ml){
//             nsp++;
//             nst--   ;
           
//         // }
//         // else{ nsp++;
//         //     nst -=2;
          
        

// //   nst+=2;
// //  nsp--;
//         printf("\n");
//     }

// return 0;
// }
