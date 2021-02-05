#include <stdio.h>
#include <string.h>

/*Задача 10. Напишете функцията strncat(s, t, n), която добавя
(конкатенира) n символа от стринга t в края на стринга s.*/

void strngcat(char *s,char *t,int n);

int main(void){

    char s[] = "Hello";
    char t[] = "World";
    int n;

    printf("Enter the number of symbols to concatenate in the end of string s: \n");
    scanf("%d",&n);
    if(n>strlen(t)){
        printf("The number is bigger that the length of string t\n");
        while (n>strlen(t)){
        printf("Please enter a smaller number than,or one that equals to %d \n",strlen(t));
        scanf("%d",&n);
        }
    }

    strngcat(s,t,n);

    return 0;
}

void strngcat(char *s,char *t,int n){

    int i=0,j=0;
    
    for(i;s[i] != '\0';i++){

    }

    for (j;j<n;j++,i++){
        s[i] = t[j];
    }

    s[i] = '\0';

    printf("%s",s);

}