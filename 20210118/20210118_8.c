#include <stdio.h>

int isLetter(char c);

int main(void)
{
    char ch;
    printf("Enter a char :\n");
    scanf("%c",&ch);
    int rez = isLetter(ch);
    if (rez == 1)
    {
        printf("The entered character %c is in the ASCII Alphabet", ch);
    }
    else
    {
        printf("The entered character %c is not in the ASCII Alphabet", ch);
    }
    

    return 0;
}

int isLetter(char c)
{
    if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
        return 1;
    else
        return 0;
}
