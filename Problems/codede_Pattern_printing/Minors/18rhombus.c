#include<stdio.h>
int main(){
    int n, m;
    printf("Enter rows: ");
    scanf("%d", &n);
    printf("Enter columns: ");
    scanf("%d", &m);

    for(int i = 1; i <= n; i++){

        // print spaces
        for(int s = 1; s <= n - i; s++){
            printf("  ");   // 2 spaces for alignment
        }

        // print stars
        for(int j = 1; j <= m; j++){
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
