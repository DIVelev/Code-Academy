#include <stdio.h>
#include <stdlib.h>
#define size 100
#define workerMax 10

struct Owner{
    char bname[size];
    char bfamily[size];
};

struct Worker{
    int number;
    char name[size];
    char midname[size];
    char family[size];
    char position[size];
    int workExperince;
    float salary;
    struct Owner p;
    
};

struct Worker fillArray(struct Worker workers[workerMax]);
void printArray(struct Worker workers[workerMax]);