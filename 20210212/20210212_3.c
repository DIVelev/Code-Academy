#include <stdio.h>
#include <stdlib.h>

/*Задача 3 Напишете функции, с помощта на които да реализирате динамичен
масив от елементи, чиято големина може да се променя по време на
изпълнение на програмата*/

int main(void){

    int *p = NULL;
    int flag = 1,i=0,size;
    char choice;
    printf("Enter the starting size of the array: \n");
    scanf("%d",&size);
    p = (int*)malloc(size*sizeof(int));
    while(flag){
        for(i;i<size;i++){
            printf("Enter a number for index %d: \n",i+1);
            scanf("%d",&*(p+i));
        }
        fflush(stdin);
        printf("You reached the limit of the array.Do you want to continue - press 'c' to continue or 's' to stop \n");
        scanf("%c",&choice);
        if(choice == 'c'){
            printf("Enter a new size for the array\n");
            scanf("%d",&size);
            p=(int*)realloc(p,size);
        }
        else if(choice == 's'){
            printf("Your array is:\n");
            for(i=0;i<size;i++){
                printf("Number at index %d is %d\n",i+1,*(p+i));
            }
            flag = 0;
        }
    }


    return 0;
}