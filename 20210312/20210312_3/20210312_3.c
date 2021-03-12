#include "20210312_3.h"

t_node *start;

int main(void){

    int i;
    init();
    for(i=1;i<15;i++){
        add(i);
    }
    
    int position = getNumberAtPosition(start,5);
    printf("Element at position 5 (5 positions before the end) is: %d\n",position);

    position = getNumberAtPosition(start,9);
    printf("Element at position 9 (9 positions before the end) is: %d\n",position);

    position = getNumberAtPosition(start,60);
    printf("Testing the error in the function: %d\n",position);

    return 0;
}