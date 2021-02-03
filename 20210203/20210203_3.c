#include <stdio.h>

/*Задача 3.Напишете функцията int linSearch(int a[], int l, int d),
която получава като първи аргумент началото на масив а, втория
аргумент е дължината на масива, а третия аргумент е числото,
което търсим. Претърсете масива елемент по елемент и ако
някой елемент съвпада с търсеното число върнете позицията на
която се намира този елемент. В противен случай върнете – 1.*/

int linSearch(int a[],int l,int d);

int main(void){
    
    int a[] = {0,1,2,4,5,3};
    int l = sizeof(a)/sizeof(a[0]),d;

    printf("Enter an element to search: \n");
    scanf("%d",&d);

    if(linSearch(a,l,d) == -1){
        printf("No such element in the array \n");
    }
    else{
        printf("Index of the element: %d",linSearch(a,l,d));
    }

    return 0;
}

int linSearch(int a[],int l,int d){

    int i = 0;

    for(i;i<l;i++){
        if(a[i] == d){
            return i;
        }
    }

    return -1;

}