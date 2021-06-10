#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 64

/*Задача 9.
Напишете функция, която преобразува число в низ и обратното,
като използва описанието от предишната задача.*/

union var{
    int i;
    char text[size];
};

enum type{
    VALUE_INT,
    VALUE_STR
};

struct value{
    union var variable;
    enum type varType;
};

void checkValue(struct value *varValue);
struct value integetToText(struct value *varValue);

int main(void){

    struct value integer;
    integer.variable.i = 14;
    integer.varType = VALUE_INT;
    checkValue(&integer);

    struct value resultI = integetToText(&integer);
    checkValue(&resultI);

    struct value text;
    strcpy(text.variable.text,"155");
    text.varType = VALUE_STR;
    checkValue(&text);

    struct value resultS = integetToText(&text);
    checkValue(&resultS);

    return 0;
}

void checkValue(struct value *varValue){

    if(varValue->varType == VALUE_INT){
        printf("The variable is integer: %d\n",varValue->variable.i);
    }
    else if(varValue->varType == VALUE_STR){
        printf("The variable is string: %s\n",varValue->variable.text);
    }
    
}

struct value integetToText(struct value *varValue){

    struct value result;

    if(varValue->varType == VALUE_INT){

        printf("Converting the variable to string\n");
        itoa(varValue->variable.i,result.variable.text,10);
        result.varType = VALUE_STR;
        
        return result;
    }

    else if(varValue->varType == VALUE_STR){

        printf("Converting the variable to string\n");
        result.variable.i = atoi(varValue->variable.text);
        result.varType = VALUE_INT;
        
        return result;
    }

}