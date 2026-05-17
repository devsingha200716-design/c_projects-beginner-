//100,50,30,15,7,4,2,1
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
#include<string.h>

#define LANES 4//ROAD
#define HEIGHT 15
#define ROAD_WIDTH 51

int playerLane;     //player kis lane me hai
int objLane, objY;  //falling object ka lane & height
int score, level, lives, speed;
char objType;   //$ @ - X
time_t startTime;       
int elapsedTime;        //


// Previous game stats
int prevScore = 0;
int prevLevel = 0;
int prevTime = 0;

char levelName[20];//"Level 3 PRO" jaisa text name store karne ke liye


void hideCursor() {
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ci = {1, FALSE};
    SetConsoleCursorInfo(h, &ci);
}

void spawnObject() {
    objY = 0;
    objLane = rand() % LANES;
    int r = rand() % 4;
    objType = (r == 0) ? '$' : (r == 1) ? '@' : (r == 2) ? '-' : 'X';
}

void Setup() {
    playerLane = 1;
    score = 0;
    level = 1;
    lives = 3;
    speed = 100;
    elapsedTime = 0;
    srand(time(0));
    spawnObject();
    startTime = time(NULL);
}

void Draw() {
    system("cls");          //

    if (prevScore > 0) {
        printf("Previous Game:\n");
        printf("Score: %d | Level: %d | Time: %ds\n", prevScore, prevLevel, prevTime);
        printf("Target: Beat previous survival!\n\n");
    }

    printf("+");
    for (int i = 0; i < ROAD_WIDTH; i++) printf("-");
    printf("+\n");

    for (int i = 0; i < HEIGHT - 1; i++) {//15-1=14-->[0,13]=14(|)
        printf("|");
        for (int lane = 0; lane < LANES; lane++) {
            int laneWidth = ROAD_WIDTH / LANES;
            for (int j = 0; j < laneWidth; j++) {
                if (i == objY && lane == objLane && j == laneWidth / 2)
                    printf("%c", objType);
                else if (i == HEIGHT - 2 && lane == playerLane && j == laneWidth / 2)
                    printf("A");
                else
                    printf(" ");
            }
            printf("|");
        }
        printf("\n");
    }

    printf("+");
    for (int i = 0; i < ROAD_WIDTH; i++) printf("-");
    printf("+\n");

    elapsedTime = (int)difftime(time(NULL), startTime);

    printf("Score: %d | Level: %s | Speed: %d | Lives: ", score, levelName, speed);
    for (int i = 0; i < lives; i++) printf("[!]");
    printf(" | Time: %ds\n", elapsedTime);
    printf("Controls: A-Left D-Right X-Quit\n");
}

void Input() {
    if (_kbhit()) {
        char ch = _getch();
        if ((ch == 'a' || ch == 'A') && playerLane > 0) playerLane--;
        else if ((ch == 'd' || ch == 'D') && playerLane < LANES - 1) playerLane++;
        else if (ch == 'x' || ch == 'X') lives = 0;
    }
}

void Logic() {
    objY++;

    // Collision
    if (objY == HEIGHT - 2 && objLane == playerLane) {

        if (objType == '$') {
            score += 10;
            speed -= 2;
        }
        else if (objType == '@') {
            score += 15;
            speed -= 3;
        }
        else if (objType == '-') {
            score -= 20;
            if (score < 0) score = 0;
        }
        else if (objType == 'X') {
            lives--;
        }

        spawnObject();
    }

    // Miss
    if (objY >= HEIGHT - 1) {
        if (objType == '$') lives--;
        spawnObject();
    }

// LEVEL SYSTEM (NAMING FIXED)
if (score < 100) {
    level = 1;
    speed = 100;
    strcpy(levelName, "Level 1");
}
else if (score < 200) {
    level = 2;
    speed = 50;
    strcpy(levelName, "Level 2");
}
else if (score < 250) {
    level = 3;
    speed = 30;
    strcpy(levelName, "Level 3");
}
else if (score < 350) {
    level = 4;
    speed = 15;
    strcpy(levelName, "Level 3 PRO");
}
else if (score < 500) {
    level = 5;
    speed = 7;
    strcpy(levelName, "Level 4");
}
else if (score < 650) {
    level = 6;
    speed = 4;
    strcpy(levelName, "Level 4 PRO");
}
else if (score < 800) {
    level = 7;
    speed = 2;
    strcpy(levelName, "Level 5");
}
else {
    level = 8;
    speed = 1;
    strcpy(levelName, "Level 5 PRO");
}

    // Time pressure
    if (elapsedTime != 0 && elapsedTime % 10 == 0) {
        speed -= 5;
    }
}

int main() {
    hideCursor();
    char playAgain = 'Y';

    while (playAgain == 'Y' || playAgain == 'y') {
        Setup();

        while (lives > 0) {
            Draw();
            Input();
            Logic();
            Sleep(speed < 0 ? 0 : speed);
        }

        prevScore = score;
        prevTime = elapsedTime;
        prevLevel = level;

        system("cls");
        printf("GAME OVER\n");
        printf("Final Score: %d\n", score);
        printf("Level Reached: %s\n", levelName);
        printf("Time Survived: %ds\n", elapsedTime);

        printf("\nPlay Again? (Y/N): ");
        playAgain = _getch();
    }

    printf("\nThanks for playing!\n");
    return 0;
}
// //100,50,30,15,7,4,2,1
// #include <stdio.h>
// #include <conio.h>
// #include <windows.h>
// #include <stdlib.h>
// #include <time.h>
// #include <string.h>

// #define LANES 4
// #define HEIGHT 15
// #define ROAD_WIDTH 51

// // COLORS
// #define WHITE 7
// #define GREEN 10
// #define YELLOW 14
// #define CYAN 11
// #define RED 12
// #define MAGENTA 13

// int playerLane;
// int objLane, objY;
// int score, level, lives, speed;
// char objType;
// time_t startTime;
// int elapsedTime;

// int prevScore = 0;
// int prevLevel = 0;
// int prevTime = 0;

// char levelName[20];
// HANDLE hConsole;

// void setColor(int color) {
//     SetConsoleTextAttribute(hConsole, color);
// }

// void hideCursor() {
//     CONSOLE_CURSOR_INFO ci = {1, FALSE};
//     SetConsoleCursorInfo(hConsole, &ci);
// }

// void spawnObject() {
//     objY = 0;
//     objLane = rand() % LANES;
//     int r = rand() % 4;
//     objType = (r == 0) ? '$' : (r == 1) ? '@' : (r == 2) ? '-' : 'X';
// }

// void Setup() {
//     playerLane = 1;
//     score = 0;
//     level = 1;
//     lives = 3;
//     speed = 100;
//     elapsedTime = 0;
//     srand(time(0));
//     spawnObject();
//     startTime = time(NULL);
// }

// void printObject(char ch) {
//     if (ch == '$') setColor(YELLOW);
//     else if (ch == '@') setColor(CYAN);
//     else if (ch == '-') setColor(MAGENTA);
//     else if (ch == 'X') setColor(RED);
//     else if (ch == 'A') setColor(GREEN);
//     else setColor(WHITE);

//     printf("%c", ch);
//     setColor(WHITE);
// }

// void Draw() {
//     system("cls");

//     if (prevScore > 0) {
//         printf("Previous Game:\n");
//         printf("Score: %d | Level: %d | Time: %ds\n", prevScore, prevLevel, prevTime);
//         printf("Target: Beat previous survival!\n\n");
//     }

//     setColor(WHITE);
//     printf("+");
//     for (int i = 0; i < ROAD_WIDTH; i++) printf("-");
//     printf("+\n");

//     for (int i = 0; i < HEIGHT - 1; i++) {
//         printf("|");
//         for (int lane = 0; lane < LANES; lane++) {
//             int laneWidth = ROAD_WIDTH / LANES;
//             for (int j = 0; j < laneWidth; j++) {

//                 if (i == objY && lane == objLane && j == laneWidth / 2)
//                     printObject(objType);

//                 else if (i == HEIGHT - 2 && lane == playerLane && j == laneWidth / 2)
//                     printObject('A');

//                 else
//                     printf(" ");
//             }
//             printf("|");
//         }
//         printf("\n");
//     }

//     printf("+");
//     for (int i = 0; i < ROAD_WIDTH; i++) printf("-");
//     printf("+\n");

//     elapsedTime = (int)difftime(time(NULL), startTime);

//     printf("Score: %d | Level: %s | Speed: %d | Lives: ", score, levelName, speed);
//     for (int i = 0; i < lives; i++) printf("[!]");
//     printf(" | Time: %ds\n", elapsedTime);
//     printf("Controls: A-Left D-Right X-Quit\n");
// }

// void Input() {
//     if (_kbhit()) {
//         char ch = _getch();
//         if ((ch == 'a' || ch == 'A') && playerLane > 0) playerLane--;
//         else if ((ch == 'd' || ch == 'D') && playerLane < LANES - 1) playerLane++;
//         else if (ch == 'x' || ch == 'X') lives = 0;
//     }
// }

// void Logic() {
//     objY++;

//     if (objY == HEIGHT - 2 && objLane == playerLane) {
//         if (objType == '$') { score += 10; speed -= 2; }
//         else if (objType == '@') { score += 15; speed -= 3; }
//         else if (objType == '-') { score -= 20; if (score < 0) score = 0; }
//         else if (objType == 'X') lives--;
//         spawnObject();
//     }

//     if (objY >= HEIGHT - 1) {
//         if (objType == '$') lives--;
//         spawnObject();
//     }

//     if (score < 100) { speed = 100; strcpy(levelName, "Level 1"); }
//     else if (score < 200) { speed = 50; strcpy(levelName, "Level 2"); }
//     else if (score < 250) { speed = 30; strcpy(levelName, "Level 3"); }
//     else if (score < 350) { speed = 15; strcpy(levelName, "Level 3 PRO"); }
//     else if (score < 500) { speed = 7; strcpy(levelName, "Level 4"); }
//     else if (score < 650) { speed = 4; strcpy(levelName, "Level 4 PRO"); }
//     else if (score < 800) { speed = 2; strcpy(levelName, "Level 5"); }
//     else { speed = 1; strcpy(levelName, "Level 5 PRO"); }

//     if (elapsedTime != 0 && elapsedTime % 10 == 0) speed -= 5;
// }

// int main() {
//     hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
//     hideCursor();

//     char playAgain = 'Y';

//     while (playAgain == 'Y' || playAgain == 'y') {
//         Setup();

//         while (lives > 0) {
//             Draw();
//             Input();
//             Logic();
//             Sleep(speed < 0 ? 0 : speed);
//         }

//         system("cls");
//         printf("GAME OVER\n");
//         printf("Final Score: %d\n", score);
//         printf("Level Reached: %s\n", levelName);
//         printf("Time Survived: %ds\n", elapsedTime);

//         printf("\nPlay Again? (Y/N): ");
//         playAgain = _getch();
//     }

//     printf("\nThanks for playing!\n");
//     return 0;
// }
