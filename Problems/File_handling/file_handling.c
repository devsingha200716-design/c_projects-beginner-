#include---> preprocessor directive
#include<math.h>--->float f =sqrt(4);, float cbrt(9);
#include<limits.h>-->INT_MIN/MAX

#include<stdio.h>
int main(){
    // int  x=__INT_MAX__;
    // printf("%d\n",x);
    int  x=__INT_MAX__;
    printf("%d\n",x);
    // int a=9147483648;
    // printf("%d",a);
    long a=LONG_MAX;
    printf("%ld",a);
    
}
int =4bites =32bits(2[32])= 2[-16]to2[16]-1
long =8bites =64bits(2[64])= 2[-32]to2[32]-1




//File handling
//opening,  reading,    create,      writing              closed


//fgets-->reading
//fputs--->writing

//open/read/close
//create/write/close
#include<stdio.h>
int main(){
// FILE* open =fopen("file.txt","r");//opening
 // char read[100];//reading
    // while(fgets(read,sizeof(read),open)!=NULL){//(for all line)
    //     printf("%s",read);
    // }
    // // for(fgets(read,sizeof(read),open)!=NULL){//(for single line)
    // //     printf("%s",read);
  FILE* create =fopen("pw.txt","w");//creating
    char writing[]="Placement lagegi yehisse";//writing
    fputs(writing,create);

    fclose(create);//closed
  return 0;
}


//open/read/closed
#include<stdio.h>
int main(){
    FILE*  open =fopen("unknown.c","r");
    char read[100];
    while(fgets(read,sizeof(read),open)){
        printf("%s",read);
    }
    // char writing[]="Its totally fuck";
    // fputs(writing,open);
    fclose(open);
    return 0;
}

  #code_file  
valid file
valid file
valid-->unknown file
unknown file
unknown file
valid file


// #q_A

#include<stdio.h>//1
#include<string.h>
int main(){
    char file_name[100];
    printf("Welcome to file opening \n");
    printf("Please enter the file name: ");
    fgets(file_name,sizeof(file_name),stdin);//valid file
    file_name[strcspn(file_name,"\n")]='\0';
    // scanf("%99s",file_name);

    FILE* file =fopen(file_name,"r");
    if(file!=NULL){
        printf("%s was opened successfully",file_name);
        fclose(file);
        file=NULL;
    }
    else if(file==NULL){
        printf("File was not Found");
    }


    return 0;
}


#include<stdio.h>//operation//sum,substract/product(2)
#include<string.h>
int main(){
    // const char file_name[]="pw.txt";
   char file_name[100];//pw.txt
    printf("Welcome to file opening and doing operation \n");//valid file
    printf("Please enter the file name: ");
    fgets(file_name,sizeof(file_name),stdin);
    file_name[strcspn(file_name,"\n")]='\0';
    // scanf("%99s",file_name);
    
    FILE* file =fopen(file_name,"r");
    if(file==NULL){
        printf("File was not Found");
        return 1;
    }
    printf("\n");

    int temp;
    int sum=0;

    while(fscanf(file,"%d",&temp)==1){
        sum =sum+temp;

    }
    printf("\nThe sum of all integers are: %d",sum);
    printf("\n");

    fclose(file);
    file=NULL;
    

    return 0;

}


#include<stdio.h>
#include<string.h>
int main(){
    // const char file_name[]="pw.txt";
   char file_name[100];//pw.txt
    printf("Welcome to file opening and doing operation \n");
    printf("Please enter the file name: ");
    fgets(file_name,sizeof(file_name),stdin);
    file_name[strcspn(file_name,"\n")]='\0';
    // scanf("%99s",file_name);
    
    FILE* file =fopen(file_name,"r");
    if(file==NULL){
        printf("File was not Found");
        return 1;
    }
    printf("\n");

    int temp;
    int product=1;

    while(fscanf(file,"%d",&temp)==1){
        product =product*temp;

    }
    printf("\nThe product of all integers are: %d",product);
    printf("\n");

    fclose(file);
    file=NULL;
    

    return 0;

}




#include<stdio.h>//cpying file to another(3)
#include<string.h>
int main(){
    char souce_file_name[100];
    printf("Welcome to copying source file to dest file \n");//valid file------->unknown file
    printf("Please enter the souce file name: ");
    fgets(souce_file_name,sizeof(souce_file_name),stdin);
    souce_file_name[strcspn(souce_file_name,"\n")]='\0';
    // scanf("%99s",souce_file_name);
    char dest_file_name[100];
    printf("Please enter the dest file name: ");
    fgets(dest_file_name,sizeof(dest_file_name),stdin);
    dest_file_name[strcspn(dest_file_name,"\n")]='\0';
    // scanf("%99s",dest_file_name);

    FILE* source_file =fopen(souce_file_name,"r");
    FILE* dest_file =fopen(dest_file_name,"w");//
    if(source_file==NULL|| dest_file==NULL){//
        printf("Error while opening file");
        return 1;
    }
    printf("\n");

    while(1){
        char c= fgetc(source_file);//fgetc  or fputc==for int datatype
        if(c==EOF) break;//End of file
        fputc(c,dest_file);
        printf(".");
    }
    printf("\n");

    fclose(source_file);
    fclose(dest_file);
    source_file=dest_file=NULL;
    return 0;
}



#include<stdio.h>//4
#include<string.h>
int main(){
    char file_name[100];
    printf("Welcome to taking input and writing on the new/existed file & each line is on a new line \n");//unknown file
    printf("Please enter the file name: ");
    fgets(file_name,sizeof(file_name),stdin);
    file_name[strcspn(file_name,"\n")]='\0';
    // scanf("%99s",file_name);

    FILE* file =fopen(file_name,"w");
    if(!file){
        printf("Error occured while opening the file");
        return 1;
    }
    char input[100];
    while(1){
        printf("Enter your text to be written in the file:  \n");
        fgets(input,100,stdin);
        // input[strcspn(input,"\n")]='\0';//not preferrable
        if(strcmp(input,"exit\n")==0)  break;//preferrable
        fputs(input,file);
    }
    fclose(file);
    file=NULL;
    return 0;
}


#include<stdio.h>//appned//5
#include<string.h>
int main(){
    char file_name[10];
    printf("Enter the file name : ");
    fgets(file_name,sizeof(file_name),stdin);
    file_name[strcspn(file_name,"\n")]='\0';
    FILE* file=fopen(file_name,"a");
    if(file==NULL){
        printf("Error found");
        return 0;
    }
    printf("\n");
    char input[100];
    while(1){
    printf("Enter the first line, which you want to paste in that file: ");
    fgets(input,sizeof(input),stdin);
    if(strcmp(input,"exit\n")==0) break;
    fputs(input,file);
}
    printf("\n");
    fclose(file);
    file=NULL;


    return 0;
}
#include<stdio.h>//6
int main(){
    char file_name[10];
    printf("Enter the file name: ");
    scanf("%s",file_name);
    FILE* file=fopen(file_name,"r+");
    if(file==NULL){
        printf("Error found");
        return 0;
    }
    printf("\n");
    char buffer[100];
    printf("\nReading from the file: ");
    while(fgets(buffer,sizeof(buffer),file)){
     printf("%s",buffer);
    }
    fseek(file,0,SEEK_END);
    printf("\nMein ");
    printf("\n");

    fclose(file);
    file=NULL;
    return 0;
}
