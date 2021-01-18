#include <stdio.h>

int main(void)
{
    int nX = 33; /* homework, input with scanf */
    printf("nX = \n");
    scanf("%d",&nX);
    int nY = 20;
    if (nX == nY) 
    {
        printf("%d and %d are equal\n", nX, nY);
    }
    else 
    {
        printf("%d and %d are not equal\n", nX, nY);
    }
    if (nX > nY) 
    { 
        printf("%d is greater than %d\n", nX, nY);
    }
    else // nX < nY
    {
        printf("%d is less than %d\n", nX, nY);
    }
    // Тази проверка е излишна, защото е направена в по-горен if, но я правя за опит с <= и >=
    if (nX >= nY)
    {
        printf("%d is greater than or equal to : %d\n", nX, nY);
    }
    else // nX <= nY
    {
        printf("%d is less than or equal to : %d\n", nX, nY);
    }
    
    
} /* използвайте и останалите оператори за сравнение */
