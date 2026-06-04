#include<stdio.h>
int main(){
    struct pokemon{//class
        int hp;
        int speed;
        int attack;
        char tier;//G,S,A,B,C,D
    }pikachu,charizard,NEWTWO;//objects

    struct legendarypokemon{//using struct in another struct
        int specialattack;
        struct pokemon x;
    };

    // struct pokemon pikachu;
    pikachu.hp=60;//attributes
    pikachu.speed=100;
    pikachu.attack=80;
    pikachu.tier='A';

    // struct pokemon charizard;
    charizard.hp=90;
    charizard.speed=130;
    charizard.attack=80;
    charizard.tier='G';

    // struct pokemon NEWTWO;
    printf("Enter the hp of Newtwo: ");
    scanf("%d",&NEWTWO.hp);
    printf("Enter the speed of Newtwo: ");
    scanf("%d",&NEWTWO.speed);
    printf("Enter the Attack of Newtwo: ");
    scanf("%d",&NEWTWO.attack);
    printf("Enter the tier of Newtwo: ");
    scanf(" %c",&NEWTWO.tier);//imp
    // NEWTWO.hp=90;
    // NEWTWO.speed=100;
    // NEWTWO.attack=70;
    // NEWTWO.tier='A';

    printf("\n%d\n",pikachu.hp);
    printf("%c",pikachu.tier);

    return 0;
}

#include<stdio.h>       //(3)
#include<string.h>
int main(){
    struct Book{
        char name[20];//imp
        int price;
        int pages;
    }Math,Science,social;
    printf("Enter the name of the Math Book: ");
    fgets(Math.name,sizeof(Math.name),stdin);
    printf("Enter the price of the Math Book: ");
    scanf("%d",&Math.price);
    printf("Enter the pages of the Math Book: ");
    scanf("%d",&Math.pages);
    
    getchar(); // 🔥 clear newline before fgets //imp
    printf("Enter the name of the Science Book: ");
    fgets(Science.name,sizeof(Science.name),stdin);
    // Science.name[strcspn(Science.name,"\n")]=='\0';
    printf("Enter the price of the Science Book: ");
    scanf("%d",&Science.price);
    printf("Enter the pages of the Science Book: ");
    scanf("%d",&Science.pages);

    printf("%s",Math.name);
    printf("%d\n",Math.price);
    printf("%d\n",Math.pages);
    
    printf("%s",Science.name);
    printf("%d\n",Science.price);
    printf("%d\n",Science.pages);
                                                    //imp
    // social.name={anupama book};//XXX
    strcpy(social.name,"anupama Book");//string is done by input method,index loop method, ya normal index putting methiod and copy method
    social.price=20;
    social.pages=200;

    printf("%s\n",social.name);
    printf("%d\n",social.price);
    printf("%d\n",social.pages);
    
    return 0;
}

#include<stdio.h>//5
int main(){
    // struct person{
    //     char name[20];
    //     int salary;
    //     int age;
    // }Firstperson,secondperson;

    typedef struct person{
        char name[20];
        int salary;
        int age;
    }person;
    person Firstperson;//insted of "struct person<--->person"
    person secondperson;

    //its very useful in critical time 

    printf("Enter the name of First person: ");
    scanf("%s",Firstperson.name);
    printf("Enter the salary of First person: ");
    scanf("%d",&Firstperson.salary);
    printf("Enter the age of First person: ");
    scanf("%d",&Firstperson.age);

    printf("Enter the name of secondperson: ");
    scanf("%s",secondperson.name);
    printf("Enter the salary of secondperson: ");
    scanf("%d",&secondperson.salary);
    printf("Enter the age of secondperson: ");
    scanf("%d",&secondperson.age);
    
    printf("Name of first person: %s\n",Firstperson.name);
    printf("Age of second person: %d",secondperson.age);
    return 0;
}

#include<stdio.h>//typedef
typedef int integer;
typedef float decimal;
int main(){
    integer x;
    decimal y;
    printf("%f",y);
    return 0;
}
#include<stdio.h>
typedef int* int_pointer;
int main(){
    int x=2,y=7;

    // int*a,b;//int*a and int b
    // a=&x;
    // b=&y;

    int_pointer a,b;//int*a and int b
    a=&x;
    b=&y;
    
    // int_pointer a=&x,b=&y;//int*a and int b


    // int* a=&x,b=&y;//int*a and int b

    printf("%p\n",a);
    printf("%p\n",b);

    return  0;
}

#include<stdio.h>//array in structure
#include<string.h>
int main(){
    typedef struct pokemon{
        char name[15];
        int hp;
        int speed;
        int attack;
        char tier;
    }pokemon;
    pokemon arr[3];

    printf("Enter the name of the pokemon: ");
    scanf("%s",arr[0].name);
    printf("Enter the hp of the pokemon: ");
    scanf("%d",&arr[0].hp);
    printf("Enter the attack of the pokemon: ");
    scanf("%d",&arr[0].attack);
    printf("Enter the tier of the pokemon: ");
    scanf(" %c",&arr[0].tier);
    printf("\n");

    printf("Enter the name of the pokemon: ");
    scanf("%s",arr[1].name);
    printf("Enter the hp of the pokemon: ");
    scanf("%d",&arr[1].hp);
    printf("Enter the attack of the pokemon: ");
    scanf("%d",&arr[1].attack);
    printf("Enter the tier of the pokemon: ");
    scanf(" %c",&arr[1].tier);
    printf("\n");


    printf("Enter the name of the pokemon: ");
    scanf("%s",arr[2].name);
    printf("Enter the hp of the pokemon: ");
    scanf("%d",&arr[2].hp);
    printf("Enter the attack of the pokemon: ");
    scanf("%d",&arr[2].attack);
    printf("Enter the tier of the pokemon: ");
    scanf(" %c",&arr[2].tier);
    printf("\n");


    // strcpy(arr[0].name,"pikachu");
    // arr[0].hp=60;
    // arr[0].speed=100;
    // arr[0].attack=40;
    // arr[0].tier='C';

    // strcpy(arr[1].name,"charizard");
    // arr[1].hp=60;
    // arr[1].speed=100;
    // arr[1].attack=90;
    // arr[1].tier='a';

    // strcpy(arr[2].name,"newtwo");
    // arr[2].hp=90;
    // arr[2].speed=150;
    // arr[2].attack=140;
    // arr[2].tier='s';


    
    for(int i=0;i<3;i++){
        printf("Name of the pokemon: %s\n",arr[i].name);
        printf("HP; %d\n",arr[i].hp);
        printf("Speed: %d\n",arr[i].speed);
        printf("Atack: %d\n",arr[i].attack);
        printf("Tier: %c\n\n",arr[i].tier);
    }

    return 0;
}

#include<stdio.h>//6
int main(){
    typedef struct records{
        char first_name[15];
        char second_name[15];
        int age;
        int number_of_testmatches;
        float avg_run;
    }cricketer;
    cricketer arr[3];

    // printf("Enter the name of the cricketer: ");
    // scanf("%s",arr[0].name);
    // printf("Enter the age of the cricketer: ");
    // scanf("%d",&arr[0].age);
    // printf("Enter the number_of_teztmatch of the cricketer: ");
    // scanf("%d",&arr[0].number_of_testmatches);
    // printf("Enter the avg_run of the cricketer: ");
    // scanf("%f",&arr[0].avg_run);
    // printf("\n");

    // printf("Enter the name of the cricketer: ");
    // scanf("%s",arr[1].name);
    // printf("Enter the age of the cricketer: ");
    // scanf("%d",&arr[1].age);
    // printf("Enter the number_of_teztmatch of the cricketer: ");
    // scanf("%d",&arr[1].number_of_testmatches);
    // printf("Enter the avg_run of the cricketer: ");
    // scanf("%f",&arr[1].avg_run);
    // printf("\n");


    // printf("Enter the name of the cricketer: ");
    // scanf("%s",arr[2].name);
    // printf("Enter the age of the cricketer: ");
    // scanf("%d",&arr[2].age);
    // printf("Enter the number_of_teztmatch of the cricketer: ");
    // scanf("%d",&arr[2].number_of_testmatches);
    // printf("Enter the avg_run of the cricketer: ");
    // scanf("%f",&arr[2].avg_run);
    // printf("\n");

    for(int i=0;i<3;i++){//taking input by loop

  
    printf("Enter the name of the cricketer %d: \n",i+1);
    printf("First name: ");
    scanf("%s",arr[i].first_name);      
    printf("second name: ");
    scanf("%s",arr[i].second_name);      
    printf("Enter the age of the cricketer: ");
    scanf("%d",&arr[i].age);
    printf("Enter the number_of_teztmatch of the cricketer: ");
    scanf("%d",&arr[i].number_of_testmatches);
    printf("Enter the avg_run of the cricketer: ");
    scanf("%f",&arr[i].avg_run);
    printf("\n");
    }



    for(int i=0;i<3;i++){
        printf("The name of the cricketer %d: %s %s\n",i+1,arr[i].first_name,arr[i].second_name);
        printf("The age of the cricketer: %d\n",arr[i].age);
        printf("The number_of_testmatches of the cricketer: %d\n",arr[i].number_of_testmatches);
        printf("The avg_run of the cricketer: %f\n",arr[i].avg_run);
        printf("\n");

    }


    return 0;
}


