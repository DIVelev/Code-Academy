#include <stdio.h>
#include <string.h>

/*Задача 14*. Напишете функция int getline(char s[],int lim), която чете ред в
s[] и връща дължината му */

int getline(char s[],int lim);

int main(void){

    char s[] = "\nfirst row\nsecond row\nthird row\nfourth row";
    int lim = 4;

    printf("Length of row number %d is: %d",lim,getline(s,lim));

    return 0;
}

int getline(char s[],int lim){

    int i = 0,j=0,lineCounter = 1,characterCounter = 0;

    for(i=0;s[i] != '\0';i++){
        
        if(s[i] == '\n'){
            if(lineCounter == lim){
                ++i;
                while(s[i] != '\n' && s[i] != '\0'){
                    characterCounter++;
                    i++;
                }
                lineCounter++;
                return characterCounter;
            }
            else{
                lineCounter++;
            }
        }
    }

    return -1;
}