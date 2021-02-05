#include <stdio.h>

/*Задача 3.Какво е грешното на този код?*/
void my_strcpy(char *t, char *s){
    for (; *t; t++, s++) // Не се записва знака за край на стринга - '\0'
        *s = *t;
}

int main(void){

    char sd[] = "This is a testing example of the error";
    char t[] = "Another test";
    my_strcpy(t,sd);
    printf("%s",sd);

    return 0;
}