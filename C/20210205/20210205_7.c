#include <stdio.h>
#include <string.h>

/*Задача 7. Напишете функцията strend(s, t), която връща 1, ако низът t
се среща в края на низа s и 0 ако това не е изпълнено.*/

int strend(char *s,char *t);

int main(void){

    char s[] = "Testing my function";
    char t[] = "ion";

    if (strend(s,t) == 1){
        printf("String t is the same as the end of string s\n");
    }
    else{
        printf("String t is not the same as the end of string s\n");
    }
 
    return 0;
}

int strend(char *s,char *t){

    int i,j;

    for(i = strlen(s) - strlen(t),j = 0; s[i] != '\0';i++,j++){
        if(s[i] == t[j]){
            return 1;
        }
        else{
            return 0;
        }
    }

}