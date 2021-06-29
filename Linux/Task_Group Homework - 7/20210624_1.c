#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <errno.h>
#include <limits.h>
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

int main(int argc, char *argv[]){  

    /* check if the arguments are more than 3 */
    if(argc > 3){
        exit(2);
    }
    errno = 0;
    char *p;

    struct value integer;
    long conv = strtol(argv[1], &p, 10);
    if (errno != 0 || *p != '\0' || conv > INT_MAX || conv < INT_MIN){
        exit(3);
    }
    else{
        integer.variable.i = conv;
        integer.varType = VALUE_INT;
        checkValue(&integer);
    }
 
    struct value resultI = integetToText(&integer);
    checkValue(&resultI);

    struct value text;
    strcpy(text.variable.text, argv[2]);
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
        sprintf(result.variable.text,"%d",varValue->variable.i);
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