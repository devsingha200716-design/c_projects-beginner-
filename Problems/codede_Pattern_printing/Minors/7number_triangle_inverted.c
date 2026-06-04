// #include<stdio.h>
// int main(){
// int n;
// printf("Enter a no of r & c is :");
// scanf("%d",&n);
// for(int i=1;i<=n;i++) {//columns 
//     for(int j=1; j<=(n+1)-i; j++){  //rows
//          printf("%d ",j);
//     }
//      printf("\n");
// }
//     return 0;
// }


// if(j=(n+1)-i)
// if(j<=(n+1)-i)
// j<=n-i if input 5, it start from 4 star

// #include<stdio.h>
// int main(){
// int n;
// printf("Enter a no of r & c is :");
// scanf("%d",&n);
// for(int i=1;i<=n;i++) {//columns 
//     for(int j=1; j<=n; j++){  //rows
//         if(j<=(n+1)-i)
//        printf("%d ",j);
//     }
//      printf("\n");
// }
//     return 0;
// }

#include<stdio.h>
int main(){
    int n;
    printf("Enter a no of r & c is :");
    scanf("%d",&n);

    int a = n;

    for(int i = 1; i <= n; i++) {        // outer loop → columns
        for(int j = 1; j <= a; j++) {
        // X for(int j = 1; j <= n; j++)   // inner loop → rows
        printf("%d ",j);   
        }
        a--;
    //X n--;     // each line me star kam hota jata hai
        printf("\n");
    }
    return 0;

}


