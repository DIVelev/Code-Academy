#include <stdio.h>

int main(void)
{
    int x = 10;
    int y = 10;
    int z = 30;
    int true = x==y+(z < y)!=20;
    // x==y -> 1 (z<y)!= 20 -> 1
    //printf("Result of x==y : %d \n",x==y);
    //printf("Result of (z<y)!=20 : %d \n",(z<y)!=20);
    printf("Result of true: %d\n",true); 
    return 0;
}
