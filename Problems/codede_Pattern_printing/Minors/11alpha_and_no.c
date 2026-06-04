#include<stdio.h>

int main() {
    int n;
    printf("Enter the no.: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {

        if (i % 2 == 1) { 
            // ODD row → numbers
            for (int j = 1; j <= i; j++) {
                printf("%d ", j);
            }
        } else { 
            // EVEN row → characters
            char ch = 'A';
            for (int j = 1; j <= i; j++) {
                printf("%c ", ch);
                ch++;
            }
        }

        printf("\n");
    }

    return 0;
}
