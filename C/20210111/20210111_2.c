#include <stdio.h>

int vzemiBitna(unsigned int number, int index);

int main(void)
{
    int a,index;
    printf("A: \n");
    scanf("%d",&a);
    printf("Index: \n");
    scanf("%d",&index);
    int rez = vzemiBitna(a,index);
    printf("%d",rez);

}

int vzemiBitna(unsigned int number, int index)
{
    int mask = 1;
    number = number>>index;
    number = number&mask;
    return number;
}
