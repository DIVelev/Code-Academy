#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*Задача 14.
Напишете програма, която да проверява дали 2 стринга (масива) са
анаграми и имат всичките букви на другата дума. Използвайте функции.
Примери за анаграми: реклама: карамел; босилек: обелиск.*/

int checkIfAnagram(char *string1,char *string2);

int main(void){

    char s[] = "reklama";
    char s1[] = "karamel";
    if(checkIfAnagram(s,s1)){
        printf("The strings are anagrams \n");
    }
    else{
        printf("The strings are not anagrams \n");
    }

    return 0;
}

int checkIfAnagram(char *string1,char *string2){

    int i,j,flag = 1,count = 0;
    if(strlen(string1) > strlen(string2)){
        return 0;
    }
    else if(strlen(string1) < strlen(string2)){
        return 0;
    }

    char anagram[strlen(string1)];
    strcpy(anagram,string1); // Правя си копие на с1, в което да отбелязвам дали съвпадат
    
    for(i=0;i<strlen(string1);i++){
        for(j=0;j<strlen(string2);j++){
            if(string1[i] == string2[j]){
                anagram[i] = '.'; // Ако имат съвпадащи букви, запълвам с  точки, за да ги премахна (отбележа), че са еднакви
            }
        }
    }

    for(i=0;i<strlen(anagram);i++){
        if(anagram[i] == '.')
        count++;
    }

    if(count == strlen(anagram))
    return 1;
    else
    return 0;
}