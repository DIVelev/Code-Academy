#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*Задача 15.
Напишете програма аналог на спортния тотализатор.
Използвайте функции.
Насоки:
1. Давате право на избор на играча да избере тотализатор, в който
ще си пробва късмета: (5 от 35), (6 от 42) или (6 от 49)
2. При всяко завъртане програмата изписва 1 произволно число,
което не е извадено до момента.
3. Програмата вади числата, нужни за избраната игра (5 или 6).*/

int *menu();
int *fiveFrom35();
int *sixFrom42();
int *sixFrom49();

int main(void){

    int *res;
    res = menu();

    return 0;
}

int *menu(){

    int choice,*result;
    menu:
    printf("Menu\n");
    printf("1.5 from 35\n");
    printf("2.6 from 42\n");
    printf("3.6 from 49\n");
    printf("4.Exit\n");
    printf("Your choice: \n");
    scanf("%d",&choice);
    switch(choice){

        case 1:
        result = fiveFrom35(); // Запазвам резултата в поинтър, за да може да се използва отново.
        return result;
        break;
        
        case 2:
        result = sixFrom42();
        return result;
        break;

        case 3:
        result = sixFrom49();
        return result;
        break;

        case 4:
        exit(0);

        default:
        printf("Enter a valid choice: \n");
        goto menu;
        break;

    }
}

int *fiveFrom35(){

    static int array3From35[5];
    int checkNumber[5];
    srand((unsigned)time(NULL));
    int i,j,random,flag = 1;

    for(i=0;i<5;i++){
        random = (rand() % 35) + 1;
        for(j=0;j<5;j++){
            if(random == checkNumber[j]){
                random = (rand() % 35) + 1;
                j=0;
            }
        }
        array3From35[i] = random;
        checkNumber[i] = random;
    }

    printf("Your luck is with the numbers: \n");
    for(i=1;i<6;i++){
        printf("%d number is: %d\n",i,array3From35[i-1]);
    }

    return array3From35;
}

int *sixFrom42(){

    static int array6From42[6];
    int checkNumber[6];
    srand((unsigned)time(NULL));
    int i,j,random,flag = 1;

    for(i=0;i<6;i++){
        random = (rand() % 42) + 1;
        for(j=0;j<6;j++){
            if(random == checkNumber[j]){
                random = (rand() % 42) + 1;
                j=0;
            }
        }
        array6From42[i] = random;
        checkNumber[i] = random;
    }

    printf("Your luck is with the numbers: \n");
    for(i=1;i<7;i++){
        printf("%d number is: %d\n",i,array6From42[i-1]);
    }

    return array6From42;

}

int *sixFrom49(){

    static int array6From49[6];
    int checkNumber[6];
    srand((unsigned)time(NULL));
    int i,j,random,flag = 1;

    for(i=0;i<6;i++){
        random = (rand() % 49) + 1;
        for(j=0;j<6;j++){
            if(random == checkNumber[j]){
                random = (rand() % 49) + 1;
                j=0;
            }
        }
        array6From49[i] = random;
        checkNumber[i] = random;
    }

    printf("Your luck is with the numbers: \n");
    for(i=1;i<7;i++){
        printf("%d number is: %d\n",i,array6From49[i-1]);
    }

    return array6From49;
}