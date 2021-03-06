#include <stdio.h>
#include <signal.h>
#include <unistd.h>

/*Задача 5.
Напишете функция, принтираща сигналите, които й се подават.
Обработка на сигнали signal.h (примерът работи само със сигналите на линукс)*/

void handleSignal(int iSignal){
    printf("\nHandle signal %d\n", iSignal);
}

int main(){
    //signal(SIGQUIT, handleSignal);
    signal(SIGINT, handleSignal);
    signal(SIGABRT, handleSignal);
    for (;;)
    {
        sleep(1);
    }
    return 0;
}