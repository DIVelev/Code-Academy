#include <stdio.h>

/*Задача 5. Напишете функцията void our_strcat(char *s, char *t), която
добавя (конкатенира) стринга t в края на стринга s. С един фор цикъл трябва
да се стигне до края на низа s и след това на всяка следваща трябва да се
копират елементите на низа t. Функцията strcat() предполага, че има
достатъчно в s за да се копират всички стойности на низа t, защото иначе
оператор за присвояване може да работи извън размера на масива и да
имаме грешка. Но не сме разгледали динамичното заделяне на памет с
malloc. */

void our_strcat(char *s, char *t);

int main(void){

    char s[] = "Hello";
    char t[] = "World";

    our_strcat(s,t);

    return 0;
}

void our_strcat(char *s, char *t){

    int i = 0,j = 0;
    
    for (i;s[i] != '\0';i++){

    }

    for (j;t[j] != '\0';j++,i++){
        s[i] = t[j];
    }

    s[i] = '\0';

    printf("%s",s);

}