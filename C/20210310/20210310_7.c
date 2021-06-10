#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

/*Задача 7.
Напишете програма, която обработва Ctrl+C
Ctrl+D, Ctrl+Z*/

void INThandler(int sig);

int main(void){

    signal(SIGINT,INThandler);
    while(1){
        
    }

    return 0;
}

void INThandler(int sig){

    char c;

    signal(sig,SIG_IGN);
    printf("You pressed CTRL + C or CTRL + D or CTRL + Z!\n");
    printf("Do you want to exit the program? - Press y for yes or n for no\n");
    c = getchar();
    if (c == 'y' || c == 'Y'){
        exit(0);
    }
    else{
        signal(SIGINT,INThandler);
    }

    getchar();
}