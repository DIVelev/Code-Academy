#include <stdio.h>

int main()
{
    char s[] = "Hi";
    int i = 0 ;

    while(s[i]!='\0')
    {
        printf("%c",s[i]);
        i++;
    }

   /* for (i = 0 ; s[i] != '\0'; i++)
    {
        printf("%c",s[i]);
    }
    */
    printf("\nBroi:%d \n",i);

    return 0;
}
