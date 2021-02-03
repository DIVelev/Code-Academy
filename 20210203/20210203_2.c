#include <stdio.h>

/*Задача 2. Напишете функция int printArr(int a[], int l), която
получава като първи аргумент началото на масив от интеджери,
а като втори неговата дължина и принтира всички елементи на
масивa един по един до неговия край.*/

int printArr(int a[],int l);

int main(void){
    
    int a[] = {0,1,2};
    int l = sizeof(a)/sizeof(a[0]);
    if(printArr(a,l) == 0){
        printf("Array is printed \n");
    }
    else{
        printf("Error while printing the array \n");
    }

    return 0;
}

int printArr(int a[],int l){

    int i = 0;
    for(i;i<l;i++){
        printf("%d\n",a[i]);
    }
    
    return 0;
}