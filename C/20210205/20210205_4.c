#include <stdio.h>

/*Задача 4. Напишете финкцията int our_strcmp(char *s, char *t), която
сравнява низовете s и t и връща нула 0 ако двата низа са равни. Ако
елемента в който се различават s[i] е по-малък от t[i] връща стойност помалка от нула < 0. Ako s[i] е по-голям от t[i] връща стойност по-голяма от
нула > 0*/

int our_strcmp(char *s, char *t);

int main(void){

    char *s = "Test";
    char *t = "Test";
    int result = our_strcmp(s,t);
    if (result == 0){
        printf("String are equal\n");
    }
    else if(result > 0){
        printf("String s is not equal to string t (s is bigger that t)\n");
    }
    else if(result < 0){
        printf("String t is not equal to string s (t is bigger that s)\n");
    }

    return 0;
}

int our_strcmp(char *s, char *t){

    int i = 0;

    for(i;s[i] != '\0' && t[i] != '\0';i++){
        if (s[i] > t[i]){
            return 1;
        }
        if (s[i]< t[i]){
            return -1;
        }
    }

    return 0;
}