#include <stdio.h>
#include <stdlib.h>

typedef struct node_t node_t;

typedef struct node_t{
    int data;
    node_t *next;
} node_t;

node_t *first;
node_t *last;

int write(int n);
int read(int *n);