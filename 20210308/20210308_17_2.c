#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Пренапишете задачи 14 и 15 от лекция 22 за Потребителски
типове като пуснете двете екзета в pipe:
maraton.exe | sort.exe
Задача 14 Напишете програма, в която се въвеждат пореден
номер, име, фамилия, възраст на участници в маратон.
Изискването е, за името и фамилията, да не се използват масиви
с фиксирана дължина. След като въвеждането завърши,
изведете списък с участниците.
Задача 15 Използвайки предишното упражнение, изведете
участниците подредени по азбучен ред*/

typedef char* String;
typedef struct participants{
    int id;
    String name;
    String familyName;
    int age;
}Participants;

Participants* sortParticipants(Participants *part,int number);

int main(void){

    FILE *fp;
    char *fileName = "17zadacha.txt";
    fp = fopen(fileName,"r");
    if(fp == NULL){
        printf("File failed to open\n");
        return -1;
    }

    int lineCount = 0,i,j;
    char ch;
    while((ch = getc(fp))!= EOF){
        if (ch == '\n'){
            lineCount++;
        }
    }

    Participants *part = (Participants*)malloc(lineCount*sizeof(Participants));
    for(i=0;i<lineCount;i++){
        fscanf(fp,"%d %*s %*s %d\n",(part+i)->id,(part+i)->name,(part+i)->familyName,(part+i)->age);
    }
    part = sortParticipants(part,lineCount);


    fclose(fp);
    fp = NULL;
    return 0;
}

Participants* sortParticipants(Participants *part,int number){
   
    int i,j;
    int integerSort;
    FILE *fp;
    char *fileName = "17zadacha.txt";
    fp = fopen(fileName,"wt");
    if (fp == NULL){
        printf("File failed to open\n");
        exit(1);
    }

    for(i=0;i<number;i++){
        for(j=i+1;j<number;j++){
            String temp = (String)malloc(20*sizeof(char));
            if(strcmp(((part+i)->name),(part+j)->name)>0){
                strcpy(temp,(part+i)->name);
                strcpy((part+i)->name,(part+j)->name);
                strcpy((part+j)->name,temp);
                strcpy(temp,(part+i)->familyName);
                strcpy((part+i)->familyName,(part+j)->familyName);
                strcpy((part+j)->familyName,temp);
                integerSort = (part+i)->id;
                (part+i)->id = (part+j)->id;
                (part+j)->id = integerSort;
                integerSort = (part+i)->age;
                (part+i)->age = (part+j)->age;
                (part+j)->age = integerSort;
                fprintf(fp,"ID: %d\tFirst name: %s\tFamily name: %s\tAge: %d\n",(part+i)->id,(part+i)->name,(part+i)->familyName,(part+i)->age);
            }
        }
    }

    fclose(fp);
    fp = NULL;
    return part;
}