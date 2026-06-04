// #include<stdio.h>
// int main() {
    
//     printf(" *****\n *****\n *****\n *****\n *****\n");
    
//     return 0;

//  }


#include<stdio.h>
int main() {
  int n;
  printf("Enter the no rows: ");  
  scanf("%d",&n);
  int m;
  printf("Enter the no columns: ");  
  scanf("%d",&m);

    for(int i=1;i<=n;i++){   /// no of lines = no of columns
        for(int i=1;i<=m;i++){ // no of stars in each line = no of rows
            printf("*");
        }
        printf("\n");// move to next line after printing one row
    }    
  return 0;
 }


 