#include <stdio.h>

int main(void)
{
    int nA = 40; /* използвайте scanf */
    printf("Enter a value for nA : \n");
    scanf("%d", &nA);
    int nB = 20;
    printf("Enter a value for nB : \n");
    scanf("%d", &nB);
    int nX = 20;
    printf("Enter a value for nX : \n");
    scanf("%d", &nX);
    int nY = 30;
    printf("Enter a value for nY : \n");
    scanf("%d", &nY);
    if (nA > nB && nA != 0)
    {
        printf("&& Operator : Both conditions are true\n");
    }
    if (nX > nY || nY != 20)
    {
        printf("|| Operator : Only one condition is true\n");
    }
    if (!(nA > nB && nB != 0))
    {
        printf(" ! Operator : Both conditions are true\n");
    }
    else
    {
        printf("Both conditions are true.\n");
    }

    if ((nA*nB > nY && nX < nY) && (nA + nB > nX && nA - nB < nY) )
    {
        printf("Multiple use of &&, all conditions are true");
    }
    else
    {
        printf("Multiple use of &&, not all conditions are true");
    }
    

    return 0;
}
