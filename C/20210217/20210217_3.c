#include <stdio.h>
#include <stdlib.h>

/*Задача.3. Направете масив от указатели към функции по
следния начин:
void add(){...}
void fun2(){...}
void fun3(){...}
void (*func_ptr[3])() = {fun1, fun2, fun3};
Направете меню, с което да питате потребителя коя от
горните функции иска да използва – събиране, изваждане,
умножение и деление. След това попитайте за числата, които
да участват в тази операция, и извикайте функцията, която да
извърши желаната операция. */

void menu();
void add();
void substract();
void multiply();
void divide();
void (*func_ptr[4])() = {add, substract, multiply, divide};

int main(void){

    menu();

    return 0;
}

void add(){
    float a,b;
    printf("Enter a number for a: \n");
    scanf("%f",&a);
    printf("Enter a number for b: \n");
    scanf("%f",&b);
    printf("a + b = %f\n",(a+b));
}

void substract(){
    float a,b;
    printf("Enter a number for a: \n");
    scanf("%f",&a);
    printf("Enter a number for b: \n");
    scanf("%f",&b);
    printf("a - b = %f\n",(a-b));
}

void multiply(){
    float a,b;
    printf("Enter a number for a: \n");
    scanf("%f",&a);
    printf("Enter a number for b: \n");
    scanf("%f",&b);
    printf("a * b = %f\n",(a*b));
}

void divide(){
    float a,b;
    printf("Enter a number for a: \n");
    scanf("%f",&a);
    printf("Enter a number for b: \n");
    scanf("%f",&b);
    if( b == 0)
    printf("Cannot divide by 0!\n");
    while (b == 0){
        printf("Enter a new number for b: \n");
        scanf("%f",&b);
    }
    printf("a * b = %f\n",(a/b));
}

void menu(){

    int choice;
    menu:
    printf("Menu\n");
    printf("1.Add\n");
    printf("2.Substract\n");
    printf("3.Multiply\n");
    printf("4.Divide\n");
    printf("5.Exit\n");
    printf("Enter your choice:\n");
    scanf("%d",&choice);

    switch(choice){

        case 1: (*func_ptr[0])();
        goto menu;
        break;

        case 2: (*func_ptr[1])();
        goto menu;
        break;

        case 3: (*func_ptr[2])();
        goto menu;
        break;

        case 4: (*func_ptr[3])();
        goto menu;
        break;

        case 5:
        exit(0);
        break;

        default: printf("Enter a valid number!\n");
        goto menu;
        break;

    }

}