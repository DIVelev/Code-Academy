#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*Задача 14.
Решете задачата за генериране на 6 буквена парола с
пойнтери.*/

void menu();
char* generatePwd();

int main(void){

    menu();

    return 0;
}

void menu(){

    int choice;
    char *s;
    menu:
    printf("Menu\n");
    printf("1.Generate password \n");
    printf("2.Exit\n");
    printf("Please enter your choice:\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        s = generatePwd();
        printf("Password is: ");
        for(;*s;s++){
            printf("%c",*s);
        }
        printf("\n");
        printf("If you like the password, please press 1. Else, press 2\n");
        scanf("%d",&choice);
        if(choice == 1){
            printf("Thank you for using this generator\n");
            break;
        }
        else{
            goto menu;
        }
        break;

        case 2:
        exit(0);
        break;

        default:
        printf("Please enter a valid choice\n");
        goto menu;
        break;
    }

}

char* generatePwd(){

    srand((unsigned)time(NULL));
    static char pwd[6];
    int i,random;
    for(i=0;i<6;i++){

        random = (rand() % 2) + 1;
        if(random == 1){
            *(pwd + i) = 65 + rand() % 26;
        }
        else{
            *(pwd + i) = 97 + rand() % 26;
        }

    }

    *(pwd + i) = '\0';

    return pwd;
}