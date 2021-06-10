#include <stdio.h>
#include <stdlib.h>

/*Задача 19:
 Напишете стандартната програма за Linux cat , която приема като
аргументи от командния ред имена на файлове и изкарва съдържанието
им на стандартния изход. Ако на програмата не са подадени никакви
аргументи, то тя да изкара съдържанието подадено от стандартния вход
на стандартния изход.*/

int main(int argc, char* argv[]){

    int counter;
    char c;
    FILE *fp;
    if(argc < 2){
	    for(counter=0; counter<argc; counter++){
	        printf("argv[%2d]: %s\n",counter,argv[counter]);
        }
    }
    else{
        for(counter = 1;counter<argc;counter++){
            fp = fopen(argv[counter],"r");
            if (fp == NULL){
                printf("Failed to open file\n");
                return -1;
            }
            c = fgetc(fp);
            while (c != EOF){
                printf("%c",c);
                c = fgetc(fp);
            }
            printf("\n");
            fclose(fp);
            fp = NULL;
        }
    }


    return 0;
}