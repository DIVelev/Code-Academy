#include <stdio.h>

int main()
{
    char x = 8;
    x = x -2;
    // Ако принтираме x като char с %c - ♠, а ако го принтираме с %d - 6
    printf("%c / %d \n",x,x);
    x= x+ 6;
    // Ако принтираме x като char с %c - ♀, а ако го принтираме с %d - 12
    printf("%c / %d \n",x,x);
    x = x - 10 + 2;
    // Ако принтираме x като char с %c - ♦, а ако го принтираме с %d - 4
    printf("%c / %d \n",x,x);

}
