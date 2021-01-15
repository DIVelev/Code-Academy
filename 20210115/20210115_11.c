#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Hello";
    int count = strlen(str);
    char rts[count];
    int i;
    int end = count - 1;

    for (i = 0; i<count ;i++)
    {
        rts[i] = str[end];
        end--;
        //printf("%c",rts[i]);
    }
    rts[i] = '\0';

    printf("%s",rts);

    return 0;
    
}
