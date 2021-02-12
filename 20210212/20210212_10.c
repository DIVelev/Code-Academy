#include <stdio.h>
#include <stdlib.h>

/*Задача 10*.
Реализация на масив с променлива размерност
Тази задача е подобна на задача 2, където
използваме char масив. Тук може да използвате
друг тип. */

int main(void){

    int size,*p,i,newsize;
    printf("Enter a size for the array: \n");
    scanf("%d",&size);
    p = (int*)malloc(size * sizeof(int)); // Заделяне
    
    if (p == NULL){
        printf("Memory not allocated\n");
        exit(1);
    }

    for(i=0;i<size;i++){
        printf("Enter a number for index %d\n",i);
        scanf("%d",&*(p + i));
    }

    printf("Your array is:\n");

    for(i=0;i<size;i++){
        printf("Number at index %d is: %d\n",i,*(p+i));
    }

    printf("Enter a new size for the array: \n");
    scanf("%d",&newsize);
    p = realloc(p,newsize);

    for(i=size;i<newsize;i++){
        printf("Enter a number for index %d\n",i);
        scanf("%d",&*(p + i));
    }

    printf("Your array after rellocating is:\n");

    for(i=0;i<newsize;i++){
        printf("Number at index %d is: %d\n",i,*(p+i));
    }

    free(p); // Освобождаване
    
    return 0;
}