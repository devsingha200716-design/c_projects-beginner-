// #2
// #include<limits.h>--->INT_MIN,INT_MAX
// #include<stdbool.h>-->bool flag=true/false
#include<stdio.h>
int main(){
    int n;
    printf("Enter size : ");
    scanf("%d",&n);
    int arr[n];
    
    for(int i=0;i<n;i++){
        printf("Enter the number %d : ",i+1);
        scanf("%d",&arr[i]);}
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);}
            
            return 0;
        } 


#include<stdio.h>//print rerverse(1)
int main(){
int n;
printf("Type the size : ");
scanf("%d",&n);
int arr[n];
for(int i =0;i<n;i++){
printf("Enter no %d : ",i+1);
scanf("%d",&arr[i]);}
for(int i =n-1;i>=0;i--){
printf("%d ",arr[i]);}

return 0;
}


#include<stdio.h>//less than 35 mark(2)
int main(){
int n;
printf("No of subjects: ");
scanf("%d",&n);
int arr[n];
for (int i =0;i<n;i++){
printf("Enter %d mark : ",i+1);
scanf("%d",&arr[i]);}
printf("Marks less than 35 are given below : ");
for(int i =0;i<n;i++){
    if (arr[i]<35)
    printf("\nMark less than 35 is %d",arr[i]);

}
return 0;
}


#include<stdio.h>//swap(3)
int main(){
int num[25],temp;
num[0]=100;
num[24]=200;
temp=num[0];
num[0]=num[24];
num[24]=temp;
printf("%d\n%d",num[0],num[25]);
return 0;}



#include<stdio.h>//sum/product(4)
int main(){
int n;
printf("Type the size : ");
scanf("%d",&n);
int arr[n];
int sum =0;
for(int i =0;i<n;i++){
printf("Enter no %d : ",i+1);
scanf("%d",&arr[i]);}
for(int i =0;i<n;i++){
sum =arr[i]+sum;}
printf("%d",sum);

return 0;
}


#include<stdio.h>
int main(){
    int n;
    printf("Type the size : ");
    scanf("%d",&n);
    int arr[n];
    for(int i =0;i<n;i++){
        printf("Enter no %d : ",i+1);
        scanf("%d",&arr[i]);}
    int product =1;
    for(int i =0;i<n;i++){
        product =arr[i]*product;}
    printf("%d",product);

return 0;
}

#include<stdio.h>//max/min(5)
#include<limits.h>
int main(){
int n;
printf("Type the size : ");
scanf("%d",&n);
int arr[n];
for(int i =0;i<n;i++){
printf("Enter no %d : ",i+1);
scanf("%d",&arr[i]);}
// int max =arr[0];
int max =INT_MIN;
// int min =INT_MaX; 
int min =arr[0];
for(int i =0;i<n;i++){
//    if (max<arr[i]){
// max =arr[i];}}
// printf("%d",max);
if (min>arr[i]){
min =arr[i];}}
printf("%d",min);
return 0;
}


#include<stdio.h>//gst(6)
int main(){
    int n;
    printf("type the size : ");
    scanf("%d",&n);
    float arr[n];
    float gst =0.18;
    for(int i=0;i<n;i++){
    printf("Enter %d number: ",i+1);
    scanf("%f",&arr[i]);}
for(int i=0;i<n;i++){
printf("Total price OF %d: %f\n",i+1,arr[i]+gst*arr[i]);
}

return 0;
}        
  
    



// extra
// 1

#include<stdio.h>
int main(){
    int text[]={1,2,3};
    for(int i=0;i<=2;i++)
    printf("%d ",text[i]);
    return 0;
}


// 2  
#include<stdio.h>//small
int main(){
    int arr[3]={1,2,3};
    printf("%d",arr[-3]);
    
    return 0;
}


#include<stdio.h>//big
int main()     {
    int arr[3]={1,2,3};
    // arr[4] =3;
    printf("%d",arr[4]);
return 0;
}

//  3   
#include<stdio.h>
int main(){
    int a=2,b=3;
    int arr[b+a];
    // int arr[2+3];
    
    for(int i=0;i<a+b;i++){
        printf("eNTER %d NUMBER: ",i+1);
        scanf("%d",&arr[i]);}
        
    for(int i=0;i<a+b;i++){
        printf("%d ",arr[i]);}
        return 0;
    }
    
    
    
                
// 4  <3 address of array
    
#include<stdio.h>
int main(){
int arr[5] ={1,2,3,4,5};
for(int i=0;i<=4;i++)
    printf("%p\n",&arr[i]);
    printf("%u\n",&arr[i]);

    return 0;
}


                
    


#include<stdio.h>//changing by normal(1)
void change(int x){//pass by value
    x=4;
    return;
}
int main(){
    int a=2;
    printf("%d\n",a);
    change(a);
    printf("%d\n",a);


return 0;
}


#include<stdio.h>//changing by pointer
void change(int* x){//pass by reference
    *x=4;
    return;
}
int main(){
    int a=2;
    printf("%d\n",a);
    change(&a);
    printf("%d\n",a);

return 0;
}


#include<stdio.h>//changing by array
void change(int x[]){
    x[0]=2;
    return;
}
int main(){
    int arr[3]={1,2,3};
    printf("%d\n",arr[0]);
    change(arr);
    printf("%d\n",arr[0]);

return 0;
}


#include<stdio.h>//changing by array(swap by function)
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







#include<stdio.h>//odd incre by 10 and even by second multiple(14)
int main(){
    int n;
    printf("Type the size : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter %d number : ",i+1);
        scanf("%d",&arr[i]);}
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);}
    for(int i=0;i<n;i++){
        if (arr[i]%2==0)
            arr[i]=2*arr[i];
        else if(arr[i]%2!=0)
            arr[i]=arr[i]+10;}
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);}

    
    return 0;
}


#include<stdio.h>//show and count the element which </>= the limit (hw)
int main(){
    int n;
    printf("Enter size : ");
    scanf("%d",&n);
    int arr[n];
    
    for(int i=0;i<n;i++){
        printf("\nEnter the number %d : ",i+1);
        scanf("%d",&arr[i]);}
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);}

    int x ;
    printf("\nEnter your limit value : ");
    scanf("%d",&x);

    int count =0;

    for(int i=0;i<n;i++){
        if (arr[i]>=x)
        printf("%d ",arr[i]);
        count =count +1;
        }
        printf("\nNo of Element greater than and equal to the number %d is : %d",x,count);
        
        
        return 0;
    } 
    

    #include<stdio.h>//The diff of sum of all even element and odd element(15)
    int main(){
    int n;
    printf("Enter size : ");
    scanf("%d",&n);
    int arr[n];
    
    for(int i=0;i<n;i++){
        printf("\nEnter the number %d : ",i+1);
        scanf("%d",&arr[i]);}
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);}
    int sumodd = 0;
    int sumeven = 0;
    for(int i=0;i<n;i++){
        if (arr[i]%2!=0)
            sumodd=arr[i]+sumodd;
        else if(arr[i]%2==0)
            sumeven=arr[i]+sumeven;}
    int ans =sumeven -sumodd;
    printf("\nThe diff of sum of all even elementand odd number is : %d",ans);
    
    return 0;
} 
  


  

#include<stdio.h>//sum of pairs and count them = given x(16)
int main(){
    int n;
    printf("Enter size : ");
    scanf("%d",&n);
    int arr[n];
    
    for(int i=0;i<n;i++){
        printf("\nEnter the number %d : ",i+1);
        scanf("%d",&arr[i]);}
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);}
    int x;
    printf("Enter limit : ");
    scanf("%d",&x);

    int count =0;
        
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){   
                if(arr[i]+arr[j]==x){
                    count++;
                    printf("(%d,%d)",arr[i],arr[j]);}}}
        
    printf("\n%d ",count);
        
    return 0;
} 
  
    

#include<stdio.h>//sum of triplet and count them= given x(17)
int main(){
    int n;
    printf("Enter size : ");
    scanf("%d",&n);
    int arr[n];
    
    for(int i=0;i<n;i++){
        printf("\nEnter the number %d : ",i+1);
        scanf("%d",&arr[i]);}
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);}
    int x;    
    printf("Enter limit : ");
    scanf("%d",&x);

    int count =0;
        
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){   
            for(int k=j+1;k<n;k++){   
                if(arr[i]+arr[j]+arr[k]==x){
                    count++;
                    printf("(%d,%d,%d)",arr[i],arr[j],arr[k]);}}}}
        
    printf("\n%d ",count);                
        
    return 0;
}     
  
#include<stdio.h>//sec largest elmt of the array(using max pre question)(in two loop)(18)
#include<limits.h>
int main(){
    int n;
    printf("Enter size : ");
    scanf("%d",&n);
    int arr[n];
    
    for(int i=0;i<n;i++){
        printf("\nEnter the number %d : ",i+1);
        scanf("%d",&arr[i]);}

    int max=INT_MIN;
    int sec_lar =INT_MIN;
    for(int i=0;i<n;i++){
        if (max<arr[i])
             max=arr[i];}
    for(int i=0;i<n;i++){
        if (arr[i]!=max && sec_lar<arr[i])
             sec_lar=arr[i];}
    printf("Max element is : %d",max);
    printf("\nsec largest element is : %d",sec_lar);
        
        
    return 0;
} 
  
#include<stdio.h>//sec largest elmt of the array(using max pre question)(in one loop)(19)
#include<limits.h>
int main(){
    int n;
    printf("Enter size : ");
    scanf("%d",&n);
    int arr[n];
    
    for(int i=0;i<n;i++){
        printf("\nEnter the number %d : ",i+1);
        scanf("%d",&arr[i]);}

    int max=INT_MIN;
    int sec_lar =INT_MIN;
    for(int i=0;i<n;i++){
        if (max<arr[i]){
            sec_lar=max;
            max=arr[i];
        }
        else if(arr[i]!=max && sec_lar<arr[i])
             sec_lar=arr[i];
    }
    printf("Max element is : %d",max);
    printf("\nsec largest element is : %d",sec_lar);
        
        
    return 0;
} 




#include<stdio.h>//copy element of array to another in reverse(20)
int main(){
    int n;
    printf("Enter size : ");
    scanf("%d",&n);
    int arr[n];
    int brr[n];
    
    for(int i=0;i<n;i++){
        printf("\nEnter the number %d : ",i+1);
        scanf("%d",&arr[i]);}

    for(int i=0;i<n;i++){
        brr[i]=arr[(n-1)-i];}

    for(int i=0;i<n;i++){
        printf("%d ",brr[i]);}

            
    return 0;
} 
 

#include<stdio.h>//reverse array with extra array(demo)
int main(){
    int n;
    printf("Enter size : ");
    scanf("%d",&n);
    int arr[n];
    int brr[n];
    
    for(int i=0;i<n;i++){
        printf("\nEnter the number %d : ",i+1);
        scanf("%d",&arr[i]);}

    for(int i=0;i<n;i++){
        brr[i]=arr[(n-1)-i];}
    for(int i=0;i<n;i++){
        arr[i]=brr[i];}

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);}

            
    return 0;
} 
 
 


#include<stdio.h>//reverse(full) array without extra array(21)
void reverse(int arr[], int n){
    // int i = 0;
    // int j = n - 1;
    // while(i < j){
    for(int i=0,j=n-1;i<j;i++,j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        // i++;
        // j--;
    }
}
int main(){
    int n;
    printf("Enter size : ");
    scanf("%d",&n);
    int arr[n];
    
    for(int i=0;i<n;i++){
        printf("\nEnter the number %d : ",i+1);
        scanf("%d",&arr[i]);}

    reverse(arr, n);

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);}
            
    return 0;
} 
 



#include <stdio.h>//check the array is pallindrome or not(hw)
int main() {
    int n;
    printf("Enter size : ");
    scanf("%d", &n);
    
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    // Palindrome check
    int isPalindrome = 0;
    for (int i = 0, j = n - 1; i < j; i++, j--) {
        if (arr[i] != arr[j]) {
            isPalindrome = 1;
            break;
        }
    }
    
    if (isPalindrome==0)
    printf("\nPalindrome\n");
    else if(isPalindrome ==1)
    printf("\nNot Palindrome\n");
    
    return 0;
}






//if k>n--->k-n,k%n




#include<stdio.h>//reverse------>bite(demo)
void reverse(int arr[], int n,int a,int b){
    // int i = a;
    // int j = b;
    // while(i < j){
    for(int i=a,j=b;i<j;i++,j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        // i++;
        // j--;
    }
}
int main(){
    int n;
    printf("Enter size : ");
    scanf("%d",&n);
    int arr[n];
    
    for(int i=0;i<n;i++){
        printf("\nEnter the number %d : ",i+1);
        scanf("%d",&arr[i]);}
        
    int s;
    printf("Enter trimmed first index : ");
    scanf("%d",&s);
    int e;
    printf("Enter trimmed end index : ");
    scanf("%d",&e);
    reverse(arr,n,s,e);
    //part of arry eg s=3, e=8
    
    

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);}
            
    return 0;
} 
 







#include<stdio.h>//reverse(full)----->(bite)------->rotate(22)
void reverse(int arr[], int n,int a,int b){
    // int i = a;
    // int j = b;
    // while(i < j){
    for(int i=a,j=b;i<j;i++,j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
        // i++;
        // j--;
    return ;
}
int main(){
    int n;
    printf("Enter size : ");
    scanf("%d",&n);
    int arr[n];
    
    for(int i=0;i<n;i++){
        printf("\nEnter the number %d : ",i+1);
        scanf("%d",&arr[i]);}
        
    int k;
    printf("Type the k : ");
    scanf("%d",&k);
    k=k%n;
    // reverse(arr,n,1,4);//part of arry
    reverse(arr,n,0,n-1);//full of arry
    reverse(arr,n,0,k-1);
    reverse(arr,n,k,n-1);
    
    
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);}
            
    return 0;
} 
 

#include<stdio.h>//finding the x number from the array,if yess print the index(linear)(23)
#include<stdbool.h>
int main(){
int n;
printf("Type the size : ");
scanf("%d",&n);
int arr[n];
for(int i =0;i<n;i++){
    printf("Enter %d number : ",i+1);
    scanf("%d",&arr[i]);}
int x;
printf("Type x : ");
scanf("%d",&x);
bool flag =false;
int idx =-1;
for(int i =0;i<n;i++){//from first
// for(int i =n-1;i>=0;i++){//for checking x of index from last 
    if (arr[i]==x){
        idx=i;
        flag=true;
        break;//for first one and foir last one,without how many x is in the array(for x multi times in array)
    }
}
if(flag==true){
    printf("%d is present in the array ands its index is %d",x,idx);
}
else if(flag ==false){
    printf("%d is not present in the array",x);

}
  return 0;
}
#include <stdio.h>//multi
int main() {
int n;
printf("Type the size: ");
scanf("%d", &n);
int arr[n];
for (int i = 0; i < n; i++) {
    printf("Enter %d number: ", i + 1);
    scanf("%d", &arr[i]);
}
int x;
printf("Type x: ");
scanf("%d", &x);

int count = 0;

printf("%d is present in the array at index: ", x);//if it is sure that x is present in array

for (int i = 0; i < n; i++) {
    if (arr[i] == x) {
        printf("%d ", i);   // print all indices
        count++;
    }
}

if (count == 0) {
    printf("Not present");
}

return 0;
}


#include<stdio.h>//missing(not done)(hw)
int main() {
    int n;
    printf("Enter size (with missing element): ");
    scanf("%d", &n);

    int arr[n];
    int sumInput = 0;

    // taking input
    for(int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
        sumInput += arr[i];
    }

    int sumFull = n*(n+1)/2;

    int missing = sumFull - sumInput;

    printf("\nMissing number = %d\n", missing);

    return 0;
}




  
#include<stdio.h>//duplicate array(24)
int main(){
    int n;
    printf("Enter size : ");
    scanf("%d",&n);
    int arr[n];
    
    for(int i=0;i<n;i++){
        printf("\nEnter the number %d : ",i+1);
        scanf("%d",&arr[i]);}
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                printf("%d is duplicate is number\n",arr[i]);
                break;
            }
        }
    }
   return 0;
} 






  
#include<stdio.h>//unique number(25)
#include<stdbool.h>
int main(){
    int n;
    printf("Enter size : ");
    scanf("%d",&n);
    int arr[n];
    
    for(int i=0;i<n;i++){
        printf("\nEnter the number %d : ",i+1);
        scanf("%d",&arr[i]);}
    for(int i=0;i<n;i++){
        bool flag = false;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                flag =true;
            }
        }
        if(flag==false){
            printf("%d is unique number \n",arr[i]);
        }  
            
        
        
    }
   return 0;
} 





