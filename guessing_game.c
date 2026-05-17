#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int random,guess;
    int no_of_guess =0;
    srand(time(NULL));

    printf("\n\n--------------------GETS(*~*)READY--------------------\n");

    printf("Welcome to the world of Guessing Numbers\n");
    random=rand() % 100 + 1;
    // printf("%d",random);
    do{
        printf("\nPlease enter your guess number between(1 to 100): ");
        scanf("%d",&guess);
        no_of_guess++;

        if(guess>random){
            printf("Guess lower number");
        }
        else if(guess<random){
            printf("Guess higher number");
        }
    }while(guess!=random);
    printf("-------------------------------------------------------\n");
    printf("Congratulations !!!\n");
    printf("You have successfully guessed the number in %d attempts\n", no_of_guess);
    printf("-------------------------------------------------------\n");

    return 0;
}

#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
    int random;
    int guess_num;
    int attempt=0;
    srand(time(NULL));
    random=rand()%1000+1;
    printf("\n----------------*welcome to Guessing world*-----------------");
    do{
        printf("\nGuess the number between 1 to 1000: ");
        scanf("%d",&guess_num);
        if(guess_num<random) {
            printf("Go little bit Higher");
            attempt++;
        }
        else if (guess_num>random){
            printf("Go little bit Lower");
            attempt++;
        }
    }while(guess_num!=random);
    printf("\nYou won the guessing game in just %d attempts.\n\n",attempt);
    return 0;
}

