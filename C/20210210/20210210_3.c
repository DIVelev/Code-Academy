#include <stdio.h>
#include <string.h>
#define L 1000

/*Задача 3. Използвайте Задача 1. за да напишете програма, която
проверява дали съобщението не е палиндром. Палиндром е съобщение, в
което буквите от ляво на дясно са същите като от дясно на ляво.
I did,did I? */

void palindromeCheck(char *s);

int main(void){

    char msg[L];
    int i,j;
    char *p;
    printf("Enter a message: ");
    for(i=0;i<L;i++){
        msg[i] = getchar();
        if(msg[i] == '\n'){
            msg[i] = '\0';
            p = &msg[i];
            break;
        }
    }
    printf("Your message is: %s \n",msg);
    palindromeCheck(msg);

    printf("Reversal is: ");
    for(j=0;j<=i;j++){
        putchar(*(p-j));
    }

    return 0;
}

void palindromeCheck(char *s){

    int start = 0;
    int end = strlen(s) - 1; // Без '\0'
    if (s[end] == '?' || s[end] == '.' || s[end] == '!'){       // Премахвам знаците за край на изречението, за да се провери самото изречение.
        while(s[end] == '?' || s[end] == '.' || s[end] == '!' ){
            end--;
        }
    }

    while(end > start){
        if (s[start++] != s[end--]){
            printf("The string is not a palindrome\n");
            return;
        }
    }
    printf("The string is a palindrome\n");
}