
#include<stdio.h>
int main(){
    int arr[3][2]={{2,3},{5,6},{6,8}};//without row is valid
    int arr[][2]={{2,3},{5,6},{6,8}};
    int arr[3][2]={2,4,5,6,1,8};
    int arr[][2]={2,4,5,6,1,8};

    int arr[2][2];//row and colummn compulsory
    arr[0][0]=1;
    arr[0][1]=2;
    arr[1][0]=3;
    arr[1][1]=4;

 for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

return 0;
}

//default

#include<stdio.h>
int main(){
    int r;
    printf("Type rows: ");
    scanf("%d",&r);
    int c;
    printf("Type columns: ");
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter index arr[%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}


#include <stdio.h>///student mark and name and subject(1)
int main() {
    int r;

    printf("\n\nEnter number of students (rows): ");
    scanf("%d", &r);

    int c;
    printf("Enter number of subjects (columns): ");
    scanf("%d", &c);

    int marks[r][c];      // FIXED SIZE
    char names[r][20];     // FIXED SIZE

    // Input
    for (int i = 0; i < r; i++) {
        printf("\nEnter name of student %d: ", i + 1);
        scanf("%s", names[i]);

        for (int j = 0; j < c; j++) {
            printf("Enter marks of subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

    // Output
    printf("\n-------------------------------------------------\n");
    printf("| Student Name");

    for (int j = 0; j < c; j++) {
        printf(" | Subject%d", j + 1);
        if(j==c-1){
            printf(" |");
        }
    }
    printf("\n-------------------------------------------------\n");
    for (int i = 0; i < r; i++) {
        printf("| %-12s", names[i]);  //- in left allign and no minus sign in right
        for (int j = 0; j < c; j++) {
            printf(" | %8d", marks[i][j]);
            if(j==c-1){
            printf(" |");
        }
        }
        printf("\n");
    }

    printf("-------------------------------------------------\n");

    return 0;
}

#include<stdio.h>//matrice adding (3)
int main(){
    int r;
    printf("Type rows: ");
    scanf("%d",&r);
    int c;
    printf("Type columns: ");
    scanf("%d",&c);
    int arr[r][c];
    int brr[r][c];
    printf("\nFirst Matrix\n\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter index arr[%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nSecond Matrix\n\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter index brr[%d][%d]: ",i,j);
            scanf("%d",&brr[i][j]);
        }
    }
    printf("\nAddition of First and Second Matrix\n\n");
    
    // int res[r][c];       //storing the rseulltant matrix 
    // for(int i=0;i<r;i++){
        //     for(int j=0;j<c;j++){
            //         res[i][j]=arr[i][j]+brr[i][j];
            //     }
            // }
    // for(int i=0;i<r;i++){
        //     for(int j=0;j<c;j++){
            //         printf("%d ",res[i][j]);
            //     }
            //     printf("\n");
            // }
            for(int i=0;i<r;i++){
                for(int j=0;j<c;j++){
                    printf("%d ",arr[i][j]+brr[i][j]);
                }
                printf("\n");
            }
            return 0;
        }
        
        
        
       

#include<stdio.h>//transpose of a matrix(6)
int main(){
    int r;
    printf("Type rows: ");
    scanf("%d",&r);
    int c;
    printf("Type columns: ");
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter index arr[%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    //  for(int i=0;i<c;i++){//c=3
    //         for(int j=0;j<r;j++){//r=2
    //             arr[i][j]=arr[j][i];
    //         }
    //         printf("\n");
    //     }
    
    // for(int i=0;i<r;i++){
    //         for(int j=0;j<c;j++){
    //             printf("%d ",arr[i][j]); //X
    //         }
    //         printf("\n");
    //     }
    
    prtintf("\n\n");
    printf("The transpose of the matrix: ");
    prtintf("\n\n");
    for(int i=0;i<c;i++){//c=3
        for(int j=0;j<r;j++){//r=2
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }    

 return 0;
}




#include<stdio.h>//transpose of a matrix and storing the transpose(7)
int main(){
    int r;
    printf("Type rows: ");
    scanf("%d",&r);
    int c;
    printf("Type columns: ");
    scanf("%d",&c);
    int arr[r][c];
    int brr[c][r];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter index arr[%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<c;i++){//c=3
        for(int j=0;j<r;j++){//r=2
         brr[i][j]=arr[j][i];
        }
    }
    prtintf("\n\n");
    printf("Below given is a transpose of the matrix and its stored: ");
    prtintf("\n\n");
    for(int i=0;i<c;i++){//c=3
        for(int j=0;j<r;j++){//r=2
            printf("%d ",brr[i][j]);
        }
        printf("\n");
    }



    return 0;
}



#include<stdio.h>//convert square matrix (imp bcz in normal transpose loop interupt )into its transpose without another array(8)
void swap(int n,int arr[n][n]){
    for(int i=0;i<n;i++){               //i=0---n-1
        for(int j=i;j<n;j++){           //j=i---n-1
           // for(int j=0;j<=i;j++){    //j=0---i
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    return;
}
int main(){
    int n;
    printf("Type Square matrix(n): ");
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("Enter index arr[%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    //transpose
    swap(n,arr);
    // for(int i=0;i<n;i++){               //i=0---n-1
    //     for(int j=i;j<n;j++){           //j=i---n-1
    //        // for(int j=0;j<=i;j++){    //j=0---i
    //         int temp=arr[i][j];
    //         arr[i][j]=arr[j][i];
    //         arr[j][i]=temp;
    //     }
    // }
    //output
    prtintf("\n\n");
    printf("The transpose of the square maatrix without another array: ");
    prtintf("\n\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

 return 0;
}


// step 1 transpose
// step 2 reverse each row
#include<stdio.h>//write a program to rotate matrix 90* clockwise(9)(square matrix)
void swap(int n,int arr[n][n]){
    for(int i=0;i<n;i++){               //i=0---n-1
        for(int j=i;j<n;j++){           //j=i---n-1
           // for(int j=0;j<=i;j++){    //j=0---i
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    return;
}
int main(){
    int n;
    printf("Type square matrix(n): ");
    scanf("%d",&n);
    int arr[n][n];
    //input
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("Enter index arr[%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    //transpose
        swap(n,arr);
    // for(int i=0;i<n;i++){               //i=0---n-1
    //     for(int j=i;j<n;j++){           //j=i---n-1
    //         // for(int j=0;j<=i;j++){    //j=0---i
    //         int temp=arr[i][j];
    //         arr[i][j]=arr[j][i];
    //         arr[j][i]=temp;
    //     }
    // }
    //rotate
    for(int i=0;i<n;i++){
        for(int j=0,k=n-1;j<k;j++,k--){
          int temp =arr[i][j];
          arr[i][j]=arr[i][k];
          arr[i][k]=temp;
        }
    }
    // for(int i=0;i<n;i++){
    //     int j=0;
    //     int k=n-1;
    //     while(j<k){
    //         int temp =arr[i][j];
    //       arr[i][j]=arr[i][k];
    //       arr[i][k]=temp;
    //       j++;
    //       k--;
    //     }
    // }
    //output
    prtintf("\n\n");
    printf("The rotation of a square maatrix without another array: ");
    prtintf("\n\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
 return 0;
}


#include<stdio.h>//Matrix multiplication(10)
int main(){
    int m;
    printf("\n\nType first matrix rows(m): ");
    scanf("%d",&m);
    int n;
    printf("Type first matrix columns(n): ");
    scanf("%d",&n);
    int p;
    printf("Type second matrix rows(p): ");
    scanf("%d",&p);
    int q;
    printf("Type second matrix columns(q): ");
    scanf("%d",&q);
    int arr[m][n];
    int brr[p][q];
    int res[m][q];
    if(n!=p){
        printf("\n\n");
        printf("Matrix multiplication not possible!");
        printf("\n\n");
        return 0;
    }
    //input
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("Enter elelment arr[%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            printf("Enter element brr[%d][%d]: ",i,j);
            scanf("%d",&brr[i][j]);
        }
    }

    //multiplying
  for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            //i row of arr[][] and j column of brr[][]
            //(arr[i][0],arr[i][1],arr[i][2]...  *  brr[0][j],brr[1][j],brr[2][j]....)
            res[i][j]=0;
            for(int k=0;k<n;k++){
                res[i][j]+=arr[i][k]*brr[k][j];
            }
            
        }
    }
//output
printf("\n\n");
printf("The resultant of the matrice multiplication of arr[m][n]*brr[p][q] is: ");
printf("\n\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
    return 0;
}

