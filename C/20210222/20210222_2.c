#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Задача 2. Структура от обединение и описател*/

enum tagEType{
    VALUE_INT,
    VALUE_STR
};

union tagMyVar{
    int i;
    char c[64];
};

struct tagMyValue{
    enum tagEType type;
    union tagMyVar var;
};

void printValue(struct tagMyValue *pValue);

int main(void){

    struct tagMyValue value = {VALUE_INT,13};
    printValue(&value);
    value.type = VALUE_STR;
    strcpy(value.var.c,"Hello");
    printValue(&value);

    return 0;
}

void printValue(struct tagMyValue *pValue){

    if (VALUE_INT == pValue->type){
        printf("INT: %d\n", pValue->var.i);
    }
    else if (VALUE_STR == pValue->type){
        printf("STR: %s\n", pValue->var.c);
    }
}
