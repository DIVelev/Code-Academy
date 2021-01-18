#include <stdio.h>

int main(void)
{
    int nA = 1;
    int nB = (nA == 1 ? 2 : 0);
    printf("A value is %d\n",nA);
    printf("B value is %d\n",nB);

    printf("Enter a value for A: \n");
    scanf("%d",&nA);

    int max = (nA > nB ? nA : nB);
    printf("Max value :%d \n",max); 

    /*if (nA > nB)
    {
        printf("nA = %d has a bigger value than nB = %d \n",nA,nB);
    }
    else
    {
        printf("nB = %d has a bigger value than nA = %d \n",nB,nA);
    } */
    
    return 0;
}
