#include <stdio.h>
#define L 1000

/*Задача 2. Напишете програма, която чете съобщение, след което го
принтира в обратен ред:
Enter a message: I am Miro.
Reversal is : .oriM ma I
Използвайте getchar() за да вземете символите от конзолата, запазете ги в
масив от чарове, прекратете четенето до достигане на \n. Използвайте
пойнтер, който да сочи към текущата позиция на масива. Чрез него
принтирайте масива в обратен ред.*/

int main(void){

    char msg[L];
    int i;
    char *p;
    printf("Enter a message: ");
    for(i=0;i<L;i++){
        msg[i] = getchar();
        if(msg[i] == '\n'){
            msg[i] = '\0';
            p = &msg[i]; // Последният елемент
            break;
        }
    }
    printf("Your message is: %s \n",msg);

    printf("Reversal is: ");
    while(i>0){
        --p;
        putchar(*p);
        i--;
    }

    return 0;
}