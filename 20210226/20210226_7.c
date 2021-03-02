#include <stdio.h>
#include <stdlib.h>
#define size 5

/*Задача 7. Напишете масив от структури наречен kaytab[ ], като
използвате тази, дефинирана в горното упражнение - потребителски тип
key_t, която съдържа символен низ и число. Инициализирайте масива с
всички ключови думи на С*/

typedef struct key{
    char s[100];
    int integer;
}key_t;


int main(void){

    key_t keytab[size];
    int i;
    // Може да се инициализира и с while цикъл
    for(i=0;i<size;i++){
        printf("Enter a string for index %d: \n",i);
        scanf("%s",&(keytab+i)->s);
        printf("Enter an integer for index %d: \n",i);
        scanf("%d",&(keytab+i)->integer);
    }

    for(i=0;i<size;i++){
        printf("String at index %d is: %s\n",i,(keytab+i)->s);
        printf("Integer at index %d is: %d\n",i,(keytab+i)->integer);
        printf("\n");
    }

    return 0;
}
