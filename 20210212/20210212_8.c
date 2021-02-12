#include <stdio.h>
#include <stdlib.h>

/*Задача 8.
Заделяне на памет от стека с alloca.
Заделете памет в стека (няма нужда от free())*/

int main(void){
    
    int size,*p,i;
    printf("Enter the size of the array:\n");
    scanf("%d",&size);
    p = alloca(size*sizeof(int));
    for(i=0;i<size;i++){
    printf("Enter a number for index %d\n",i);
    scanf("%d",&p[i]);
    }
    for(i=0;i<size;i++){
    printf("Number for index %d is %d\n",i,p[i]);  
    }
    
}