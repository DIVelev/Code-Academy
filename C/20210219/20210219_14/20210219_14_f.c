#include "20210219_14_f.h"

struct Worker fillArray(struct Worker workers[workerMax]){
    int i;
    for(i=0;i<workerMax;i++){
        printf("Enter worker's number: \n");
        scanf("%d",&workers[i].number);
        printf("Enter worker's name: \n");
        scanf("%s",workers[i].name);
        printf("Enter worker's midname: \n");
        scanf("%s",workers[i].midname);
        printf("Enter worker's family: \n");
        scanf("%s",workers[i].family);
        printf("Enter worker's position: \n");
        scanf("%s",workers[i].position);
        printf("Enter worker's work experience: \n");
        scanf("%d",&workers[i].workExperince);
        printf("Enter worker's salary: \n");
        scanf("%f",&workers[i].salary);
        fflush(stdin);
        printf("Enter worker's boss name: \n");
        gets(workers[i].p.bname);
        fflush(stdin);
        printf("Enter worker's boss family: \n");
        gets(workers[i].p.bfamily);
    }
}

void printArray(struct Worker workers[workerMax]){
    int i;
    printf("Worker's list: \n");
    for(i=0;i<workerMax;i++){
        printf("Number: %d \n Name: %s\n Midname: %s\n Family: %s\n Position: %s\n Work Experience: %d\n Salary: %.2f\n Boss Name: %s\n Boss Family: %s\n",workers[i].number,workers[i].name,
        workers[i].midname,workers[i].family,workers[i].position,workers[i].workExperince,workers[i].salary,workers[i].p.bname,workers[i].p.bfamily);
    }
}