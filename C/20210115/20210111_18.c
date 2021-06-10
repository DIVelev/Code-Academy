#include <stdio.h>
#include <stdlib.h>

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
    //printf("%d",rez);

    unsigned int sum = 0;

    if (rez==1)
    {
        //Ако цената е за 1 каравана на ден
        sum = caravan * caravan_price;
        // Ако всички каравани са с обща цена 90лв.
        //sum = caravan_price;
        printf("Suma : %u \n",sum );
        printf("Jelaete li neshto drygo? \n");
        
    }
    else
    {
        if (rez == 2)
        {
            // Ако цената е за 1 кемпер на ден
            sum = campers * campers_price;
            // Ако всички кемпери са с обща цена 90лв.
            //sum = campers_price;
            printf("Suma : %u \n",sum );
            printf("Jelaete li neshto drygo? \n");
        }
        else
        {
            printf("Vuveli ste greshno chislo.");
            exit(1);
        }
        
    }
    
    return 0;

}
