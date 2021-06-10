#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Задача 20. Дефинирайте стринг „I am a poor programmer”.
Заменете през пойнтер “poor” с “great”.*/

char* replaceWord(const char *string,const char* replacedWord,const char* newWord);

int main(void){

    char string[] = {"I am a poor programmer"};
    char replacedWord[] = {"poor"};
    char newWord[] = {"great"};
    char *result = NULL;
     
    printf("String before replacing : %s\n",string);
    result = replaceWord(string,replacedWord,newWord);
    printf("String after replacing: %s\n",result);
    free(result);

    return 0;
}

char* replaceWord(const char *string,const char* replacedWord,const char* newWord){

    char* finalResult;
    int replacedWordLength,newWordLength,counter = 0,i;
    replacedWordLength = strlen(replacedWord); // Проверявам дължината на думата за смяна
    newWordLength = strlen(newWord); // Проверявам дължината на новата дума

    for(i=0;string[i] != '\0';i++){
        if(strstr(&string[i],replacedWord) == &string[i]){ // Първата поява на думата в стринга
            counter++;
            i += replacedWordLength - 1;
        }
    }

    finalResult = (char*)malloc(i + counter * (newWordLength - replacedWordLength) + 1); // Освобождава се нова памет за стринг, който да може да побере старият стринг, след заместване на думата

    i=0;
    while(*string){
        if(strstr(string,replacedWord) == string){
            strcpy(&finalResult[i],newWord);
            i += newWordLength;
            string += replacedWordLength;
        }
        else{
            finalResult[i++] = *string++;
        }
    }
    finalResult[i] = '\0';
    return finalResult;
}