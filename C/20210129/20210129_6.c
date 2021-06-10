#include <stdio.h>

/* Задача 6. Напишете програма на С, която чрез функция да обръща
десетични числа в двоични. */

void decimalToBinary(int a);

int main(void)
{

    int a;
    printf("Enter a number that will be converted to decimal: \n");
    scanf("%d", &a);
    decimalToBinary(a);

    return 0;
}

void decimalToBinary(int a)
{

    int s[a];
    int i = 0;
    while (a > 0)
    {

        s[i] = a % 2;
        i++;
        a = a / 2;
    }
    
    i = i-1;
    while (i>=0){
        printf("%d",s[i]);
        i--;
    }

}