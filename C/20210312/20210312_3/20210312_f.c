#include "20210312_3.h"


void init(){
    start = NULL;
}

int add(int number){

    t_node* q = start;
    start = (t_node*)malloc(sizeof(t_node));
    if(!start){
        return -1;
    }
    start->value = number;
    start->next = q;
    return 0;
}

int getNumberAtPosition(t_node* node,int position){

    t_node* current = node;
    int count;
    while(current!=NULL){
        if(count == position){
            return(current->value);
        }
        else{
            count++;
            current = current->next;
        }
    }

    printf("Item not found in the list\n");
    return -1;
}