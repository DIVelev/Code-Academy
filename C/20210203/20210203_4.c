#include <stdio.h>

/*Задача 4.Напишете функцията int binarySearch(int a[], int n, int
x), която получава като първи аргумент началото на масив а,
втория аргумент е дължината на масива, а третия аргумент е
числото, което търсим. Знаем, че масива в който ще търсим
елемента е предварително подреден. Сравняваме тъсения
елемент с елемента в средата на масива. Ако той е по голям от
този в средата търсим елемента от средата до края, ако е помалък го търсим в частта от началото до средата. Това се
повтаря, докато елемента от масива не стане равен с търсения.
Тогава връщаме номера на който се намира елемента в масива
или -1 ако не се съдържа в масива.*/

int binarySearch(int a[], int n, int x);

int main(void){

    int arr[] = {1,2,3,4,5,6,7}; //Работи с четен брой и нечетен брой числа
    int n = sizeof(arr)/sizeof(arr[0]);
    int x;
    printf("Enter a number to search: \n");
    scanf("%d",&x);
    if(binarySearch(arr,n,x) == -1){
        printf("Number not found\n");
    }
    else{
        printf("Number found with index: %d\n",binarySearch(arr,n,x));
    }

    return 0;
}

int binarySearch(int a[], int n, int x){

    int i=0,j = 0;

    if(n%2 == 0){
        i = n/2;
        if (x > a[i] || x == a[i]){
            for (i;i<n;i++){
                if(a[i] == x)
                return i;
            }
        }
        else{
            for(j;j<i;j++){
                if(a[j] == x)
                return j;
            }
        }
    }
    else{
        i = (n/2);
            if (x > a[i] || x == a[i]){
                for (i;i<n;i++){
                        if(a[i] == x)
                        return i;
                }
            }
            else{
                for(j;j<i;j++){
                    if(a[j] == x)
                    return j;
            }
        }
    }

    return -1;

}