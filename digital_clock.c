//H-hour(24)    I-Hour(12)
//M-minute
//S-second
//p-am/pm

//A-Thursday
//B-November
//d-29
//Y-2007


#include<stdio.h>
#include<time.h>
#include<unistd.h>
#include<stdlib.h>

void get_time(char*,int);
int input_format(int);
void get_date(char*);
// void clear_screen();
void clear_screen();


int main(){
    char time[50],date[100];
    int format;
    format=input_format(format);
    
    while(1){
    get_time(time,format);
    get_date(date);
    // clear_screen();
    // clear_screen();
    // printf("         **Look at The Time, Dev.Be fast,'or die'**\n");
    printf("Current Time: %s",time);
    printf("\nCurrent Date: %s\n\n",date);
    sleep(1);//sleep for 1 second
    }

    return 0;
}

void clear_screen(){
    #ifdef _WIN32
        system("cls");
    #else 
        system("clear");
    #endif
}
// void clear_screen(){
//     printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
// }

void get_date(char* buffer){
    time_t raw_time;//1
    struct tm* current_time;//3

    time(&raw_time);//2
    current_time =localtime(&raw_time);//4
    strftime(buffer,100,"%A,%B %d,%Y",current_time);
    // strftime(buffer,100,"%c",current_time);
    return;
}

int input_format(int format){
    printf("\nChoose the time Format: ");
    printf("\n1. 24 Hour Format");
    printf("\n2. 12 Hour Format (default)");
    printf("\nMake a choice (1/2): ");
    scanf("%d",&format);
    return format;
}
void get_time(char* buffer,int format){
    time_t raw_time;//1
    struct tm* current_time;//3

    time(&raw_time);//2
    current_time =localtime(&raw_time);//4
    if(format==1) {
        strftime(buffer,50,"%H:%M:%S",current_time);
    }
    else strftime(buffer,50,"%I:%M:%S %p",current_time);  
    // if(format==1) strftime(buffer,50,"%X",current_time);
    // else strftime(buffer,50,"%X",current_time);
}


 


///well defined


#include<stdio.h>
#include<time.h>
#include<unistd.h>
#include<stdlib.h>
void get_time(char*,int);
int input_format(int);
void get_date(char*);
void clear_screen();

int main(){
        char time[50],date[100];
        int format;
        format=input_format(format);
        while(1){
        get_time(time,format);
        get_date(date);
        clear_screen();    
        printf("Current Time: %s\n",time);
        printf("Current Date: %s\n\n",date);
        sleep(1);
        }
        return 0;
}
void clear_screen(){
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
    return ;
}

void get_date(char* buffer){
    time_t raw_time;
    struct tm* current_time;
    time(&raw_time);
    current_time =localtime(&raw_time);
    strftime(buffer,100,"%A,%B %d,%Y",current_time);
    return;
}

int input_format(int format){
    printf("\n\nChoose the Hour format:");
    printf("\n1. 24 Hour format");
    printf("\n2. 12 Hour format (default)");
    printf("\nMake a choose (1/2):");
    scanf("%d",&format);
    printf("\n");
    return format;
}

void get_time(char* buffer, int format){
    time_t raw_time;
    struct tm* current_time;
    time(&raw_time);
    current_time =localtime(&raw_time);
    if(format==1) strftime(buffer,50,"%H:%M:%S",current_time);
    else strftime(buffer,50,"%I:%M:%S %p",current_time);
    return;
}












//circle ui

#include<stdio.h>
#include<time.h>
#include<unistd.h>
#include<stdlib.h>
void get_time(char*,int);
int input_format(int);
void get_date(char*);
void clear_screen();
void draw_clock_ui(char*, char*);

int main(){
        char time[50],date[100];
        int format;
        format=input_format(format);
        while(1){
        get_time(time,format);
        get_date(date);
        clear_screen();    
        draw_clock_ui(time, date);
        // printf("Current Time: %s\n",time);
        // printf("Current Date: %s\n\n",date);
        sleep(1);
        }
        return 0;
}
void clear_screen(){
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
    return ;
}

void get_date(char* buffer){
    time_t raw_time;
    struct tm* current_time;
    time(&raw_time);
    current_time =localtime(&raw_time);
    strftime(buffer,100,"%A,%B %d,%Y",current_time);
    return;
}

int input_format(int format){
    printf("\n\nChoose the Hour format:");
    printf("\n1. 24 Hour format");
    printf("\n2. 12 Hour format (default)");
    printf("\nMake a choose (1/2):");
    scanf("%d",&format);
    printf("\n");
    return format;
}

void get_time(char* buffer, int format){
    time_t raw_time;
    struct tm* current_time;
    time(&raw_time);
    current_time =localtime(&raw_time);
    if(format==1) strftime(buffer,50,"%H:%M:%S",current_time);
    else strftime(buffer,50,"%I:%M:%S %p",current_time);
    return;
}

void draw_clock_ui(char* timeStr, char* dateStr) {
    int i, j;
    int r = 8;
    int cx = r;
    int cy = r;

    for(i = 0; i <= 2*r; i++){
        for(j = 0; j <= 2*r; j++){
            int dx = i - cx;
            int dy = j - cy;
            int d  = dx*dx + dy*dy;

            if(d >= r*r - r && d <= r*r + r){
                printf("* ");
            } 
            else {
                // 🔹 CENTER CONTENT
                if(i == r-1 && j == 3){
                    printf("%-16s", timeStr);
                    j += 7;   // skip columns
                }
                else if(i == r && j == 1){
                    printf("%-20s", dateStr);
                    j += 9;
                }
                else {
                    printf("  ");
                }
            }
        }
        printf("\n");
    }
}
