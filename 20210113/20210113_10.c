#include <stdio.h>

int main()
{
    unsigned int caravan = 3;
    unsigned int caravan_price = 90;
    unsigned int campers = 3;
    unsigned int campers_price = 100;

    printf("Dobre doshli v Karavani Kempeti pod naem\n");
    printf("Ako zelaete karavana natisnete 1\n");
    printf("Ako zelaete kemper natisnete 2\n");
    unsigned int rez;
    // Възможно е да се сканира и с %u, защото е unsigned integer
    scanf("%d",&rez);
    printf("%d",rez);

}
