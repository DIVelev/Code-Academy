#include <stdio.h>
#include <stdlib.h>
#define size 100
#define workerMax 10

/*Задача 13. Представете служителите във фирма в структура с членове:
пореден номер, име, презиме, фамилия, позиция, трудов стаж в години,
заплата в лева, указател към структурата, описващ неговия началник.
Напишете програма, която въвежда 10 служителя, които се съхраняват в
масив от описаните структури. Въвеждането на служителите може да стане
на два паса, първо въвеждане на всички данни без указателя към
началника и на втори пас, указване на всеки служител кой е неговият
началник.*/

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

int main(void){

    struct Worker workers[workerMax];
    fillArray(workers);
    printArray(workers);

    return 0;
}

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