#include <stdio.h>
#include <stdlib.h>
#define size 100

/*Задача 7.
Хванете дълъг стринг и пребройте колко пъти се среща всяка буква от
азбуката в него. Запишете резултата в масив за всяка буква.
Може ли да оптимизирате тази задача и да не се налага да въртим два
цикъла?
Как бихте направили същото, използвайки case?*/

int main(void){

    char arr[size];
    int count[26] = {0};
    int i,letter;
    printf("Enter a string: \n");
    gets(arr);
    printf("Your string is: \n");
    puts(arr);

    i = 0;
    
    while(arr[i] != '\0'){
        
        // Switch case - решение
       /* switch(arr[i]){
            case 'a': case 'A':
            letter = arr[i] - 'a';
            count[letter]++;
            break;

            case 'b': case 'B':
            letter = arr[i] - 'a';
            count[letter]++;
            break;

            case 'c': case 'C':
            letter = arr[i] - 'a';
            count[letter]++;
            break;

            case 'd': case 'D':
            letter = arr[i] - 'a';
            count[letter]++;
            break;

            case 'e': case 'E':
            letter = arr[i] - 'a';
            count[letter]++;
            break;

            case 'f': case 'F':
            letter = arr[i] - 'a';
            count[letter]++;
            break;

            case 'g': case 'G':
            letter = arr[i] - 'a';
            count[letter]++;
            break;

            case 'h': case 'H':
            letter = arr[i] - 'a';
            count[letter]++;
            break;

            case 'i': case 'I':
            letter = arr[i] - 'a';
            count[letter]++;
            break;

            case 'j': case 'J':
            letter = arr[i] - 'a';
            count[letter]++;
            break;

            case 'k': case 'K':
            letter = arr[i] - 'a';
            count[letter]++;
            break;

            case 'l': case 'L':
            letter = arr[i] - 'a';
            count[letter]++;
            break;

            case 'm': case 'M':
            letter = arr[i] - 'a';
            count[letter]++;
            break;

            case 'n': case 'N':
            letter = arr[i] - 'a';
            count[letter]++;
            break;

            case 'o': case 'O':
            letter = arr[i] - 'a';
            count[letter]++;
            break;

            case 'p': case 'P':
            letter = arr[i] - 'a';
            count[letter]++;
            break;

            case 'q': case 'Q':
            letter = arr[i] - 'a';
            count[letter]++;
            break;

            case 'r': case 'R':
            letter = arr[i] - 'a';
            count[letter]++;
            break;

            case 's': case 'S':
            letter = arr[i] - 'a';
            count[letter]++;
            break;

            case 't': case 'T':
            letter = arr[i] - 'a';
            count[letter]++;
            break;

            case 'u': case 'U':
            letter = arr[i] - 'a';
            count[letter]++;
            break;

            case 'v': case 'V':
            letter = arr[i] - 'a';
            count[letter]++;
            break;

            case 'w': case 'W':
            letter = arr[i] - 'a';
            count[letter]++;
            break;

            case 'x': case 'X':
            letter = arr[i] - 'a';
            count[letter]++;
            break;

            case 'y': case 'Y':
            letter = arr[i] - 'a';
            count[letter]++;
            break;

            case 'z': case 'Z':
            letter = arr[i] - 'a';
            count[letter]++;
            break;
        }*/

        if((arr[i] >= 'a' && arr[i] <= 'z') || (arr[i] >= 'A' && arr[i] <= 'Z')){
            letter = arr[i] - 'a';
            count[letter]++;
        }
        i++;
    }

    for(i=0;i<26;i++){
        printf("%c occurs %d times in the string!\n",i +'a',count[i]);
    }

    return 0;
}