#include <stdio.h>
#include <stdlib.h>

/*Задача 6.
Заделете динамично с malloc памет за char* buffer с размер size = 2,
въвеждайте символи от конзолата с getchar() ги четете, записвайте ги в
буфера. Увеличавайте размера на буфера преди да се препълни с
realloc().
Прекъснете цикъла с Ctrl + Z. Принтирайте буфера и освободете паметта.*/

int main(void){

    int size = 2,count = 0;
    char* buffer,c,*p;
    buffer = (char*)malloc(size*sizeof(char));
    printf("Enter characters: (to stop press CTRL and C)\n");
    while((c=getchar())!= EOF){
        count++;
        p = realloc(buffer,count*sizeof(char));
        if(p != NULL){
            buffer = p;
            buffer[count - 1] = c;
        }
    }
    count++;
    p = realloc(buffer,count*sizeof(char));
    if(p!=NULL){
        buffer = p;
        buffer[count-1] = '\0';
    }
    printf("You entered: %s",buffer);

    free(buffer);

    return 0;
}