area of circle =^r2
circumference of circle =2^r

#include<stdio.h>//3d
int main(){
    float r;
    printf("Give the radius of the circle: ");
    scanf("%f",&r);
    int pie=3.14;
    int area=pie*r*r;
    int circumference=2*pie*r;
    printf("The area of the circle is: %f",area);
    printf("The circumference of the circle is: %f",circumference);

    return 0;
}

#include<stdio.h>//3g//tycasting
int main(){
    int x=2;
    float y=(float)x;//y=2.00
    printf("%d",x);
   
    return 0;
}

C Programming Questions (14 – 32)



14. Write a program in C to find out the location of a number from the array.//array(1)
#include<stdio.h>//Q14 find the location of a number from the array
#include<stdbool.h>

int main(){
    int n;
    printf("Enter size : ");
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter %d number : ",i+1);
        scanf("%d",&arr[i]);
    }

    int x;
    printf("Enter number to search : ");
    scanf("%d",&x);

    bool flag = false;
    int idx = -1;

    for(int i=0;i<n;i++){
        if(arr[i]==x){
            flag = true;
            idx = i;
            break;
        }
    }

    if(flag==true)
        printf("%d found at index %d",x,idx);
    else
        printf("%d not found in the array",x);

    return 0;
}

16. Write a program in C to find the maximum and minimum number in an array.(2)
#include<stdio.h>//Q16 max and min in array
#include<limits.h>

int main(){
    int n;
    printf("Enter size : ");
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter %d number : ",i+1);
        scanf("%d",&arr[i]);
    }

    int max = INT_MIN;
    int min = INT_MAX;

    for(int i=0;i<n;i++){
        if(arr[i]>max)
            max = arr[i];
        if(arr[i]<min)
            min = arr[i];
    }

    printf("Maximum number is : %d",max);
    printf("\nMinimum number is : %d",min);

    return 0;
}

19. Write a program in C to search a number in an array and find the location of the searched number.(3)
#include<stdio.h>//Q14 find the location of a number from the array
#include<stdbool.h>

int main(){
    int n;
    printf("Enter size : ");
    scanf("%d",&n);
    
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter %d number : ",i+1);
        scanf("%d",&arr[i]);
    }
    
    int x;
    printf("Enter number to search : ");
    scanf("%d",&x);
    
    bool flag = false;
    int idx = -1;
    
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            flag = true;
            idx = i;
            break;
        }
    }
    
    if(flag==true)
    printf("%d found at index %d",x,idx);
    else
    printf("%d not found in the array",x);
    
    return 0;
}


//Program to sort array elements in ascending order(4)

#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter %d elements:\n", 1+1);
        scanf("%d",&arr[i]);
    }

    // sorting (ascending order)
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Array in ascending order:\n");
    for(int i=0;i<n;i++){
        printf("%d ", arr[i]);
    }

    return 0;
}

//2d array
20. Write a program in C to calculate the multiplication and transpose of an m × n matrix//2d---arrray(1)
#include<stdio.h>//Q20 matrix multiplication and transpose
int main(){
    int m;
    printf("Type rows of first matrix(m): ");
    scanf("%d",&m);
    int n;
    printf("Type columns of first matrix(n): ");
    scanf("%d",&n);

    int p;
    printf("Type rows of second matrix(p): ");
    scanf("%d",&p);
    int q;
    printf("Type columns of second matrix(q): ");
    scanf("%d",&q);

    int arr[m][n];
    int brr[p][q];
    int res[m][q];

    if(n!=p){
        printf("Matrix multiplication not possible!");
        return 0;
    }

    //input first matrix
    printf("\nFirst Matrix\n\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("Enter index arr[%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    //input second matrix
    printf("\nSecond Matrix\n\n");
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            printf("Enter index brr[%d][%d]: ",i,j);
            scanf("%d",&brr[i][j]);
        }
    }

    //multiplication
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            res[i][j]=0;
            for(int k=0;k<n;k++){
                res[i][j]+=arr[i][k]*brr[k][j];
            }
        }
    }

    //output multiplication
    printf("\nResultant Matrix after Multiplication:\n\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }

    //transpose of resultant matrix
    printf("\nTranspose of Resultant Matrix:\n\n");
    for(int i=0;i<q;i++){
        for(int j=0;j<m;j++){
            printf("%d ",res[j][i]);
        }
        printf("\n");
    }

    return 0;
}

21. Write a program in C to find the sum of diagonal of a given matrix.(2)
#include<stdio.h>//Q21 sum of diagonal of matrix
int main(){
    int n;
    printf("Type square matrix(n): ");
    scanf("%d",&n);

    int arr[n][n];
    int sum = 0;

    //input
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("Enter index arr[%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    //diagonal sum
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                sum += arr[i][j];
            }
        }
    }

    //output
    printf("\nMatrix is:\n\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    printf("\nSum of diagonal elements: %d",sum);

    return 0;
}


22. Write a program in C to check the given string is palindrome or not with and without using string function.//string(1)
#include<stdio.h>//palindrome without string function(22-A)
int main(){
    char str[50];
    int size = 0;

    printf("Enter the string: ");
    scanf("%s",str);

    //finding length
    while(str[size]!='\0'&& str[size]!='\n'){
        size++;
    }

    int flag = 1;
    for(int i=0,j=size-1;i<j;i++,j--){
        if(str[i]!=str[j]){
            flag = 0;
            break;
        }
    }

    if(flag==1){
        printf("It is a palindrome");
    }
    else{
        printf("It is not a palindrome");
    }

    return 0;
}

#include<stdio.h>//with string function //8
#include<string.h>
int main(){
    printf("welcome to pallindrome string checker \n\n");
    char text[50];
    printf("Type the text : ");
    fgets(text,sizeof(text),stdin);
    text[strcspn(text,"\n")] ='\0';
    int palindrome  = 0;
    for (int i =0,j=strlen(text)-1;i<j;i++,j--){
        if(text[i]!=text[j]){
            palindrome=1;
            break;
        }
          
    }
    if (palindrome==0){
        printf("Its a palindrome");
    }  
    else if (palindrome ==1){
        printf("Its not palindrome");
    }
    



    return 0;
}


23. Write a program in C to concatenate two strings.//(2)
#include<stdio.h>
#include<string.h>
int main(){
    char first[50];
    printf("Enter first string : ");
    fgets(first,sizeof(first),stdin);
    first[strcspn(first,"\n")]='\0';
    
    char second[50];
    printf("Enter second string : ");
    fgets(second,sizeof(second),stdin);
    second[strcspn(second,"\n")]='\0';

    strcat(first,second);

    printf("After concatenation : %s",first);

    return 0;
}

24. Write a program in C to count the number of vowels in a string.(3)
#include<stdio.h>
#include<string.h>
int main(){
    char text[100];
    printf("Enter the text : ");
    fgets(text,sizeof(text),stdin);
    
    int count=0;
    for(int i=0;i<strlen(text);i++){
    // for(int i=0;text[i]!='\0';i++){
        if(text[i]=='a' || text[i]=='e' || text[i]=='i' ||
           text[i]=='o' || text[i]=='u' ||
           text[i]=='A' || text[i]=='E' || text[i]=='I' ||
           text[i]=='O' || text[i]=='U'){
            count++;
        }
    }

    printf("Total number of vowels : %d",count);

    return 0;
}

25. Write a program in C to count the occurrence of a character in a string.(4)
#include<stdio.h>
#include<string.h>
int main(){
    char text[100];
    printf("Enter the text : ");
    fgets(text,sizeof(text),stdin);
    
    char x;
    printf("Enter character to find : ");
    scanf(" %c",&x);
    
    int count=0;
    for(int i=0;i<strlen(text);i++){
        if(text[i]==x){
            count++;
        }    
    }    
    
    printf("Occurrence of '%c' is : %d",x,count);
    
    return 0;
}    
write a program to count the lenghth of a string without using libraby function//(5)
#include<stdio.h>
int main(){
    char text[100];
    printf("Enter the string: ");
    fgets(text, sizeof(text), stdin);
    
    int length = 0;
    while(text[length] != '\0' && text[length] != '\n'){
        length++;
    }

    printf("Length of the string is: %d", length);

    return 0;
}





31. Write a program in C to create file read it anns trore even and odd number in seperate file//file habdling(1)
#include<stdio.h>//store even and odd numbers in separate files (31)
#include<string.h>
int main(){
    char file_name[100];
    printf("Enter source file name: ");
    fgets(file_name,sizeof(file_name),stdin);
    file_name[strcspn(file_name,"\n")] = '\0';

    FILE* file = fopen(file_name,"r");
    if(file==NULL){
        printf("File not found");
        return 0;
    }    

    FILE* even = fopen("even.txt","w");
    FILE* odd  = fopen("odd.txt","w");

    if(even==NULL || odd==NULL){
        printf("Error creating even/odd file");
        return 0;
    }    

    int num;
    while(fscanf(file,"%d",&num)==1){
        if(num % 2 == 0){
            fprintf(even,"%d ",num);
        }    
        else{
            fprintf(odd,"%d ",num);
        }    
    }    

    fclose(file);
    fclose(even);
    fclose(odd);
    file=even=odd=NULL;
    printf("Even and Odd numbers stored successfully");

    return 0;
}    






32. Write a program in C to find the greatest of three numbers using pointer.//pointer(1)

#include<stdio.h>//greatest of three numbers using pointer (32)
int main(){
    int a,b,c;
    printf("Enter three numbers: \n");
    scanf("%d %d %d",&a,&b,&c);

    int *p1 = &a;
    int *p2 = &b;
    int *p3 = &c;

    if(*p1 > *p2 && *p1 > *p3){
        printf("Greatest number is %d",*p1);
    }    
    else if(p*2 > p*1 && *p2 > *p3){
        printf("Greatest number is %d",*p2);
    }    
    else{
        printf("Greatest number is %d",*p3);
    }    

    return 0;
}    



15. Write a program in C to display stars (pyramids).//pattern printing(1)

#include<stdio.h>
int main(){
int n ;    
printf("Enter the row :");
scanf("%d",&n);
int no =1; 
int nsp=n-1;
for(int i=1;i<=n;i++){
    for(int s = 1; s<=nsp; s++){
        printf(" ");}    
        
        for(int j=1; j<=no; j++){
            printf("*");
            
        }    
        
        printf("\n");
        no=no+2;//odd alignment 
        // no=no+1;//even alignment
    nsp =nsp-1;
}    

    return 0;
}    


//normal
//math
//recursion



28. Write a program to find the factorial of a given number using recursion and without recursion function.

29. Write a program in C to check a given string is palindrome or not.

30. Write the following program using functions (using call by value and call by reference):
    • Fibonacci series
    • Sum of digits
    • Greatest of three numbers
    • Sum of odd number series
