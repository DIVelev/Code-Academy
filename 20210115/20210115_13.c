#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "HELLO";
    int i = 0 ;

    while(str[i]!='\0')
    {
        str[i] = str[i] + 32;
        i++;
    }
    /*for (i=0;i<strlen(str);i++)
    {
        str[i] = str[i] + 32;
    }*/

    printf("%s",str);

    return 0;
}
