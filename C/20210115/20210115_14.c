#include <stdio.h>

void test();

// int a = 0 ;
extern int a;

int main()
{
    test();
    test();
    test();
    printf("%d",a);

    return 0;
}

void test()
{
    a++;
}

int a;
