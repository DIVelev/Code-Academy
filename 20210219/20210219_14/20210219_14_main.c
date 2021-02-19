#include "20210219_14_f.h"

/*Задача 14. Използвайки предишното упражнение, опишете структурите и
прототипите на функциите в отделен заглавен файл с разширение *.h, a
телата на функциите в един или няколко *.c сорс файлове.*/

int main(void){

    struct Worker workers[workerMax];
    fillArray(workers);
    printArray(workers);

    return 0;
}