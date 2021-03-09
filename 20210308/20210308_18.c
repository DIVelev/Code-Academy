#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Задача 18:
Направете сериализация и десериализация на структурата
typedef struct Person{
char name[20];
int age;
char gender;
}t_person; в XML формат по показания в лекцията начин.*/

static const char *FORMAT_PERSON_IN = "(%[^,], %d, %c)\n";
static const char *FORMAT_PERSON_OUT = "(%s, %d, %c)\n";

typedef struct Person{
    char name[20];
    int age;
    char gender;
} t_person;

int main(void){

    t_person m = {
        .name = "Dimitar",
        .age = 20,
        .gender = 'M'};
    t_person dm;

    FILE *fp;
    fp = fopen("xml_test.xml", "w+");
    if (fp == NULL){
        printf("File failed to open\n");
        return -1;
    }

    fprintf(fp, FORMAT_PERSON_OUT, m.name, m.age, m.gender);
    fseek(fp, 0, SEEK_SET);
    fscanf(fp, FORMAT_PERSON_IN, dm.name, &dm.age, &dm.gender);
    printf(FORMAT_PERSON_OUT, dm.name, dm.age, dm.gender);

    fclose(fp);
    fp = NULL;
    return 0;
}