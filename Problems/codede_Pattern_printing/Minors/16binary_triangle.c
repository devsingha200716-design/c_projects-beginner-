// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the no: ");
//     scanf("%d",&n);

//     for(int i = 1; i <= n; i++){

//         int a;
//         if(i % 2 == 1) 
//             a = 1;   // odd row starts with 1
//         else 
//             a = 0;   // even row starts with 0

//         for(int j = 1; j <= n; j++){
//             printf("%d ", a);
//             a = 1 - a;   // flip (1->0 / 0->1)
//         }

//         printf("\n");
//     }

//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the no: ");
//     scanf("%d",&n);

//     for(int i = 1; i <= n; i++){

//         int a;
//         if(i % 2 == 1) 
//             a = 1;   // odd row starts with 1
//         else 
//             a = 0;   // even row starts with 0

//         for(int j = 1; j <= i; j++){
//             printf("%d ", a);
//             a = 1 - a;   // flip/ (1->0 / 0->1)
//         }

//         printf("\n");
//     }

//     return 0;
// }
