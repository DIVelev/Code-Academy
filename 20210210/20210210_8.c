#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Задача 8. Решете задачата за генериране на 6 буквена парола с
пойнтери.*/

void menu();
void generatePwd();

int main(void){

    menu();

    return 0;
}

void menu(){

    int choice;

    menu:
    printf("Menu\n");
    printf("1.Generate password\n");
    printf("2.Exit\n");
    scanf("%d",&choice);

    switch(choice){
        case 1:
        generatePwd();
        printf("If you like the password, please press 1. Else, press 2\n");
        scanf("%d",&choice);
        if(choice == 1){
            printf("Thank you for using this generator\n");
            break;
        }
        else{
            goto menu;
        }

        case 2:
        exit(0);
    }
}

void generatePwd(){

    srand((unsigned)time(NULL));
    int i;
    char pwd[6];
    int random;
    for(i=0;i<6;i++){

        random = (rand() % 2) + 1;
        if(random == 1)
        *(pwd + i) = 65 + rand() % 26;
        if(random == 2)
        *(pwd + i) = 97 + rand() % 26;

    }
    *(pwd + i) = '\0';
    printf("Generated password is: %s\n",pwd);
}