#include <stdio.h>
#include <stdlib.h>
#define size 100
#define number 10

/*Задача 20.Движението по дълга улица на “Експрес Такси” е организирано, така че
има спирка на всеки километър. “Експрес Такси” се движи по улицата от всяка спирка
1,2,3... или 10 километра без спиране. За всеки от десетте разстояния цените са
дадени в таблица, например:
1 12
2 21
3 31
4 40
5 49
6 58
7 69
8 79
9 90
10 101

Пътник иска да пътува n (1<=n<=100) километра. Какви разстояния на пътуване трябва
да избере, така че пътуването да му излезе най-евтино, и каква е цената на цялото
пътуване? Напишете програма, която да реши проблема.
Входни данни: В първия ред от входния файл INPUT3.TXT са записани 10 цели числа,
които са цените за пътуване, съответно на 1,2,3... ,10 километра, а във втория ред е
записано само числото n.
Изходни данни: Всеки ред без последния от изходния файл OUTPUT3.TXT трябва да
съдържа две числа - дължината на маршрута и цената на билета. Цената на цялото
пътуване трябва да се запише на последния ред от изходния файл.
Примерен вход
INPUT3.TXT
12 21 31 40 49 58 69 79 90 101
15
Примерен изход
OUTPUT3.TXT
3 31
6 58
6 58
147 
*/

int main(void){

    FILE *fin;
    char *fileName = "INPUT3.txt";
    fin = fopen(fileName,"r");
    if (fin == NULL){
        printf("File failed to open\n");
        return -1;
    } 

    char *numberString = (char*)malloc(size*sizeof(char));
    int lineCounter = 0,i;
    char ch;
    int numArray[number];

    printf("Prices for km: \n");
    for(i=0;i<number;i++){
        fscanf(fin,"%d",&numArray[i]);
        printf("%d\t",numArray[i]);
    }
    printf("\n");

    rewind(fin);
    ch = fgetc(fin);
    while(ch != EOF){
        if(1 == lineCounter)
            fscanf(fin,"%[^\n]s",numberString);
            ch = fgetc(fin);
        if(ch =='\n'){
            lineCounter++;
        }
    }

    int destination = atoi(numberString);
    printf("Destination in km is: %d \n",destination);

    FILE *fout;
    char *fileNameOut = "OUTPUT3.txt";
    fout = fopen(fileNameOut,"w");
    if (fout == NULL){
        printf("File failed to open\n");
        return -1;
    } 

    while(number >= 0){
        if(number >= 10){
            if(number/2 >= 10){
                fprintf(fout,"%d\t%d\n",10,numArray[10]);
            }
            else{
                
            }
        }
    }

    fclose(fout);
    fout = NULL;
    fclose(fin);
    fin = NULL;
    return 0;
}