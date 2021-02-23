#include <stdio.h>
#include <stdlib.h>

struct t{
    char c;
    unsigned short us;
}__attribute__((packed));

struct b{
    char c;
    short s;
    int i;
    double d;
}__attribute__((packed));

union tagUTest{
    int i;
    float f;
    union tagUTest *next;
};

enum bool{false,true};

int main(void){

    struct t ob = {'A',4};
    printf("T size: %d\n",sizeof(ob));

    struct b test = {'A',2,8,2.4};
    printf("Test size: %d\n",sizeof(test));

    union tagUTest t = {0};
    union tagUTest *p = &t;

    p->f = 6.78;

    printf("P float: %f\n",p->f);
    printf("Size of tagUTest: %d\n",sizeof(t));

    enum bool flag = true;
    switch(flag){
        case true: printf("True\n");
        break;

        case false: printf("False\n");
        break;

        default: printf("Neither true, nor false\n");
        break;
    }

    return 0;
}