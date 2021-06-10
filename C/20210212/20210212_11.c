#include <stdio.h>
#include <stdlib.h>
#define length 1000
/*Задача 11.
Напишете програма, в която се въвеждат пореден номер,
име, фамилия, възраст на участници в маратон. Изискването
е за името и фамилията да не се използват масиви с
фиксирана дължина. След като въвеждането завърши,
изведете списък с участниците.*/

int main(void){

    int number[length],age[length];
    char **name,**family,choice;
    int flag = 1,count = 0,i;
    name = (char**)malloc(sizeof(char*));
    family = (char**)malloc(sizeof(char*));
    while(flag){
        printf("Enter the id of the participant \n");
        fflush(stdin);
        scanf("%d",&number[count]);
        printf("Enter the name of the participant\n");
        name[count] = (char*)malloc(16);
        fflush(stdin);
        gets(name[count]);
        printf("Enter the family of the participant\n");
        family[count] = (char*)malloc(16);
        fflush(stdin);
        gets(family[count]);
        printf("Enter the age of the participant \n");
        fflush(stdin);
        scanf("%d",&age[count]);
        printf("Do you want to continue entering a participants? Press 'y' to continue or 'n' to stop\n");
        fflush(stdin);
        scanf("%c",&choice);
        if(choice == 'n'){
            printf("Your list of participants is: \n");
            for(i=0;i<=count;i++){
                printf("Number: %d\n",number[i]);
                printf("Name: %s\n",name[i]);
                printf("Family: %s\n",family[i]);
                printf("Age: %d\n",age[i]);
            }
            flag = 0;
        }
        count++;
    }


    return 0;
}