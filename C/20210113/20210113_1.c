#include <stdio.h>

int main()
{
    char c = 255;
    char x = 10;
    char rez = c + x;
    printf("%d",rez);
    //Получава се 9, защото unsigned чарът е до 255. Т.е 255 + 10 = 256,което е 0 + 9 = 9
}
