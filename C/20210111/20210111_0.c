#include <stdio.h>

int addDigit(int a, int b);

int main(void)
{
    int a,b;
    printf("A: \n");
    scanf("%d",&a);
    printf("B: \n");
    scanf("%d",&b);
    addDigit(a,b);
    return 0;
}

int addDigit(int a, int b)
{
    printf("Result: %d",a+b);
}
