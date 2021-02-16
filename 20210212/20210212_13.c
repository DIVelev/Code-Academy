#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
/*Задача 13.
Ако x е реално число, а y — естествено, то степен се
дефинира по следния начин: x на степен y = x.x. ... .x (y пъти)
Когато y < 0, то x на y = 1 / x -y . Валидни са свойствата (x 0):
x y = x y-1 .x x y = x y+1/x x y1+y2 = x y1 .x y2 x y1 .y2 = (x y1 )
y2
Тривиалната реализация за пресмятане на x y е чрез
извършване на y последователни умножения*/
 
int main()
{
    float result;
    float *p = NULL;
    
    p = (float*)malloc(2*sizeof(float));
 
    for(int i=0; i < 2; i++)
    {
        if(i==0){
            printf("Enter the number :\n");
        }
        if(i>0){
            printf("Enter the exponant:\n");
        }
        
        scanf("%f",(p+i));
    }
    
    for(int i=0; i < 2; i++)
    {
         result = pow(*(p),*(p+i));
    }
    printf("%.2f^%.0f = %.2lf", *(p), *(p + 1), result);
    free(p);
    return 0;
}
