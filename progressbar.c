// STOP= CTR+ C
#include<stdio.h>
#include<unistd.h>//sleep
#include<stdlib.h>//clear_screen
#include<time.h>

// const int bar_length =50;
// const int max_task =5;

#define bar_length 50
#define max_task 5

//1
typedef struct{
    int id;
    int progress;
    int step;
}Task;
//.
void print_bar(Task);
void clear_screen();

int main(){
    Task task[max_task];//array
    srand(time(NULL));
    for(int i=0;i<max_task;i++){
        task[i].id=i+1;
        task[i].progress=0;
        task[i].step=rand()%5+1;//(0,1,2,3,4)+1=1,2,3,4,5
    }
    int task_incomplete=1;
    while(task_incomplete){
        task_incomplete =0;
        clear_screen();
        for(int i=0;i<max_task;i++){
            task[i].progress+=task[i].step;
            if(task[i].progress>100){
                task[i].progress =100;
            }
            else if(task[i].progress<100){
                task_incomplete =1;
            }
            print_bar(task[i]);
        }
        sleep(1);
    }
    printf("All tasks Completed!!!\n\n");
            
    return 0; 
}

void clear_screen(){
    #ifdef _WIN32
        system("cls");
    #else
    system("clear");
    #endif
    return;
}


void print_bar(Task task){
    int bar_to_show =(task.progress*bar_length)/100;
    printf("\nTask %d: [",task.id);
    for(int i=0;i<bar_length;i++){
        if(i<bar_to_show){
            printf("=");
        }
        else printf(" ");
    }
    printf("] %d%%\n",task.progress);
    return;
}


//well definrd



// #include<stdio.h>
// #include<time.h>
// #include<stdlib.h>
// #include<unistd.h>

// #define bar_length 50
// #define max_tasks 5

// typedef struct{
//     int id;
//     int progress;
//     int step;
// }Task;

// void clear_screen();
// void print_bar(Task);

// int main(){
//     Task task[max_tasks];
//     srand(time(NULL));
//     for(int i=0;i<max_tasks;i++){
//         task[i].id =i+1;
//         task[i].progress=0;
//         task[i].step=rand()%5+1;
//     }
//     int task_incomplete=1;
//     while(task_incomplete){
//         task_incomplete=0;
//         clear_screen();
//         for(int i=0;i<max_tasks;i++){
//             task[i].progress+=task[i].step;
//             if(task[i].progress>100) task[i].progress=100;
//             else if (task[i].progress<100) task_incomplete =1;
//             print_bar(task[i]);
//         }
//         sleep(1);
//     }
//     printf("\nAll The Tasks completed !!!\n\n\n");
//     return 0;
// }

// void clear_screen(){
//     #ifdef _WIN32
//         system("cls");
//     #else   
//         system("clear");
//     #endif
//     return;
// }

// void print_bar(Task task){
//     int bar_to_show =(task.progress*bar_length)/100;
//     printf("\nTask %d: [",task.id);
//     for(int i=0;i<bar_length;i++){
//         if(i<bar_to_show) printf("=");
//         else printf(" ");
//     }
//     printf("] %d%%\n",task.progress);
//     return ;
// }
