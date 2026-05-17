#include<stdio.h>
#include<string.h>
#include<conio.h>

#define max_users 10
#define credential_length 30

typedef struct{
    char username[credential_length];
    char password[credential_length];
}user;
user users[max_users];

int user_count=0;
int check_index;

void fix_fgets(char* string){
    int index= strcspn(string,"\n");
    string[index]='\0';
    return;
}

void input_hidden_password(char*password){
    char ch;
    int i=0;
    while(1){
        ch=getch();
        if(ch=='\r') break;
        else if(ch=='\b'){
            if(i>0){
                i--;
                printf("\b \b");
            }
        }
        else {
            if(i<credential_length-1){
                password[i++]=ch;
                printf("*");
            }
        }
    }
    password[i]='\0';
    printf("\n");
    return;
}

void input_credential(char* username ,char* password){
    printf("\nEnter a username:");
    fgets(username,credential_length,stdin);
    fix_fgets(username);
    printf("Enter a password:");
    input_hidden_password(password);
    return ;
}



void register_user(){
    if(user_count==max_users) {
        printf("\nMaximum %d users can store, no more user can store.\n",max_users);
        return ;
    }
    int index=user_count;
    printf("\nRegister a new user");
    input_credential(users[index].username,users[index].password);
    user_count++;
    printf("Register Successfully!!!\n");
    return ;
}

int login(){
    char username[credential_length];
    char password[credential_length];
    printf("\nLogin a user");
    input_credential(username,password);
    for(int i=0;i<user_count;i++){
        if(strcmp(username,users[i].username)==0 && strcmp(password,users[i].password)==0) return i;
    }
    return -1;
}


int main(){
    int option;
    while(1){
    printf("\n------------*Welcome to User Management*---------");
    printf("\n1. Register");
    printf("\n2. Login");
    printf("\n3. Exit");
    printf("\nSelect an option: ");
    scanf("%d",&option);
    while(getchar()!='\n');
    // getchar();
        switch(option){
        case 1:
            register_user();
            break;
        case 2:
            check_index=login();
            if(check_index>=0) printf("Login Successfull, welcome %s!!!\n",users[check_index].username);
            else printf("Login failed, try again\n");
            break;
        case 3:
            printf("\nExiting The Pogram...\n\n");
            return 0;
        default:
            printf("\nInvalid Option, please try again!!!\n");
            break;
    }
}
    return 0;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              
}