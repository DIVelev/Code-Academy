#include <stdio.h>
#include <string.h>

/*Задача 9. Напишете функцията strncpy(s, t, n), която копира най -
много n символа от t в s .*/

void strncopy(char *s,char *t,int n);

int main(void){

    char s[] = "";
    char t[] = "HelloWorld";
    int n;

    printf("Enter the number of symbols to copy: \n");
    scanf("%d",&n);

    if(n>strlen(t)){
        printf("The number is bigger that the length of string t\n");
        while (n>strlen(t)){
        printf("Please enter a smaller number than,or one that equals to %d \n",strlen(t));
        scanf("%d",&n);
        }
    }

    strncopy(s,t,n);

    printf("String s after copying: %s",s);

    return 0;
}

void strncopy(char *s,char *t,int n){

    int i = 0;
    
    for (i;i<n;i++){
        s[i] = t[i];
    }
    s[i] = '\0';
}