
 //TRANGLE BY DEV                                                                                  1



#include<stdio.h>
int main(){
  int n;
  printf(" Enter the no.  :");
  scanf("%d",&n);
  int nsp=n-1;
   
for( int i =1 ; i<=n ;i++){ 
         for( int s =1 ; s<=nsp ;s++){ 
                   printf("    "); }
   char a= 'D';
   char b= 'E';
   char c= 'V';
    for(int j=1; j<=i;j++){ 
        printf("%c%c%c ",a,b,c);
  
}  
    
    nsp--;
    printf("\n");

}
    return 0;
}


  
  

  
  
  
  // //alpha and number{triangle)                                                                   2




#include<stdio.h>

int main() {
    int n;
    printf("Enter the no.: ");
    scanf("%d", &n);
    int nsp =n-1;
    for (int i = 1; i <= n; i++) {
        for(int s=1; s<=nsp; s++){
        printf(" ");}

        if (i % 2 == 1) {  
            // ODD row → Alphabets
            char ch = 'A';
            for (int j = 1; j <= i; j++) {
                printf("%c ", ch);
                ch++;
            }
        } 
        else {  
            // EVEN row → Numbers
            for (int j = 1; j <= i; j++) {
                printf("%d ", j);
            }
        }
        nsp--;
        printf("\n");
    }

    return 0;
}




   // //binary rectangle                                                                        3




#include<stdio.h>
int main() {
    int n;
    printf("Enter the no: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {

        int a;
        if (i % 2 == 1)
            a = 0;   // ODD row starts with 0  (REVERSE)
        else
            a = 1;   // EVEN row starts with 1 (REVERSE)

        for (int j = 1; j <= n; j++) {
            printf("%d ", a);
            a = 1 - a;   // flip 0↔1
        }

        printf("\n");
    }

    return 0;
}






         //binary triangle                                                                      4





#include<stdio.h>
int main(){
    int n;
    printf("Enter the no: ");
    scanf("%d",&n);
    int nsp=n-1;
    for(int i = 1; i <= n; i++){
        for(int s=1; s<=nsp; s++){
            printf(" ");
        }

        int a;
        if(i % 2 == 1) 
            a = 0;   // odd row starts with 0  (REVERSE)
        else 
            a = 1;   // even row starts with 1 (REVERSE)

        for(int j = 1; j <= i; j++){
            printf("%d ", a);
            a = 1 - a;   // flip 0<->1
        }
        nsp--;
        printf("\n");
    }

    return 0;
}






 // number pyramid must(original is as ulta)                                                                    5

    //// alpha pyramid must(original is as ulta)                                                                   6