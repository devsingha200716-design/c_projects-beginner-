#include<stdio.h>//function prototype
int main(){
    void text();
    text();
    return 0;
}
void text(){
    printf("Hello Bhai\n");
}





#include<stdio.h>//factorial
int factorial(int x){
    int fact =1;
    for(int i=2;i<=x;i++){
        fact =fact*i;
    }
    return fact;
}
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    int a=factorial(n);//factorial
    printf("%d",a);
    return 0;
}


#include<stdio.h>//ncr
int factorial(int x){
    int fact =1;
    for(int i=2;i<=x;i++){
        fact =fact*i;
    }
    return fact;
}
int combination(int n, int r){
    int ncr = factorial(n)/(factorial(r)*factorial(n-r));
    return ncr;
}
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int r;
    printf("Enter r: ");
    scanf("%d",&r);

    int ncr = combinatiom(n,r);
    printf("%d",ncr);
    return 0;
}

#include<stdio.h>//npr
int factorial(int x){
    int fact =1;
    for(int i=2;i<=x;i++){
        fact =fact*i;
    }
    return fact;
}
int permutation(int n, int r){
    int npr = factorial(n)/factorial(n-r);
    return npr;
}
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int r;
    printf("Enter r: ");
    scanf("%d",&r);

    int npr = permutation(n,r);
    printf("%d",npr);
    return 0;
}


#include<stdio.h>//pascle triangle
int factorial(int x){
    int fact =1;
    for(int i=2;i<=x;i++){
        fact =fact*i;
    }
    return fact;
}
int combination(int n, int r){
    int ncr = factorial(n)/(factorial(r)*factorial(n-r));
    return ncr;
}
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int nsp =n-1;
    for(int i=0;i<=n;i++){
        for(int s=1;s<=nsp;s++){
            printf(" ");}
        for(int j=0;j<=i;j++){
            int icj = combination(i,j);
            printf("%d ",icj);
        }
        nsp--;
        printf("\n");
    }
    return 0;
}
#include<stdio.h>//swap two number without using third variable
int main(){
    int a;
    printf("Enter the number a: ");
    scanf("%d",&a);
    int b;
    printf("Enter the number b: ");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping the value of a is %d\n",a);
    printf("After swapping the value of b is %d\n",b);
    return 0;
}

#include<stdio.h>//pass by value &reference
void swap(int x,int y){//pass by value-------parameter/formal parameter/formal argument
void swap(int* x,int* y){//pass by reference
    int temp=x;
    x=y;
    y=temp;
    return ;
}
int main(){
    int a;
    printf("Enter the number a: ");
    scanf("%d",&a);
    int b;
    printf("Enter the number b: ");
    scanf("%d",&b);
    swap(a,b);//pass by value------------argument/actual argument/actual parameter
    swap(&a,&b);//pass by reference
    printf("After swapping the value of a is %d\n",a);
    printf("After swapping the value of b is %d\n",b);
    return 0;
}




#include<stdio.h>

void add(int a, int b) {   // a, b → FORMAL PARAMETERS/parameter/formal argument
    int sum = a + b;
    printf("%d", sum);
}

int main() {
    add(5, 3);            // 5, 3 → ACTUAL ARGUMENTS/actual parameter/argument
    return 0;
}

// return


#include<stdio.h>//Matrix multiplication(10)//1
int main(){
    int m;
    printf("Type first matrix rows(m): ");
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
            printf("Enter index arr[%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            printf("Enter index brr[%d][%d]: ",i,j);
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


#include<stdio.h>//changing by array(swap by function)//2
void swap(int x[]){
    int temp =x[0];
    x[0]=x[1];
    x[1]=temp;
    return;
}

int main(){
    int a[2]={1,2};
    printf("%d  %d\n",a[0],a[1]);
    swap(a);
    printf("%d  %d\n",a[0],a[1]);
   return 0;
}



#include<stdio.h>//pascle triangle//3
int factorial(int x){
    int fact =1;
    for(int i=2;i<=x;i++){
        fact =fact*i;
    }
    return fact;
}
int combination(int n, int r){
    int ncr = factorial(n)/(factorial(r)*factorial(n-r));
    return ncr;
}
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int nsp =n-1;
    for(int i=0;i<=n;i++){
        for(int s=0;s<=nsp;s++){
            printf(" ");}
        for(int j=0;j<=i;j++){
            int icj = combination(i,j);
            printf("%d ",icj);
        }
        nsp--;
        printf("\n");
    }
    return 0;
}


