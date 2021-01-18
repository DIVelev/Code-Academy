#include <stdio.h>

int main(void)
{
    int x = 10;
    int y = 10;
    int true,false;
    true = (++x || y);
    printf("Result : %d\n",true);

    return 0;
}
