#include <stdio.h>

int main(void) 
{
    int x = 1, y = 0;
    int z = y || x;
    printf("z = %d\n",z); // z = 1
    printf("\nInit values: X= %d, Y= %d\n", x, y);
    x = 1 + 2, 2 * 3, 3 + 4; // Изразът ще се изпълни от дясно наляво
    y = ( 7 * 8, 8 + 9, 9 - 4); // Поради наличието на скоби, операторът запетая се изпълнява от ляво на дясно
    printf("\nX= %d, Y= %d\n", x, y);

    return 0;
}
