#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define length 1000

/*Задача 12.
Използвайки предишното упражнение, изведете участниците
подредени по азбучен ред.*/

int main(void){

    int number[length],age[length];
    char **name,**family,choice,s[length];
    int flag = 1,count = 0,i,j,temp;
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
            for(i=0;i<=count;i++){
                for(j=i+1;j<=count;j++){
                    if(strcmp(name[i],name[j])>0){
                        strcpy(s,name[i]);
                        strcpy(name[i],name[j]);
                        strcpy(name[j],s);
                        strcpy(s,family[i]);
                        strcpy(family[i],family[j]);
                        strcpy(family[j],s);
                        temp = number[i];
                        number[i] = number[j];
                        number[j] = temp;
                        temp = age[i];
                        age[i] = age[j];
                        age[j] = temp;
                    }
                }
            }

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