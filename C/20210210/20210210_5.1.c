#include <stdio.h>

/*Задача 5. Пренапишете алгоритъма за сортиране без да използвате
инкрементиращи променливи.
void sort ( int a[], int n){
int i, j, temp;
for ( i = 0; i < n - 1; ++i )
for ( j = i + 1; j < n; ++j )
if ( a[i] > a[j] ) {
temp = a[i];
a[i] = a[j];
a[j] = temp;
}
}*/

void sort(int a[], int n);
void printArray(int *arr, int size);
void fillArray(int *arr,int size);

int main(void){

    int length;
    printf("Enter a length for the array: \n");
    scanf("%d",&length);
    int arr[length];
    fillArray(arr,length);
    printf("Before sorting array is: \n");
    printArray(arr,length);
    sort(arr,length);
    printf("After sorting array is: \n");
    printArray(arr,length);

    return 0;
}

void sort(int a[], int n){

    int i, j, temp;

    for (i = 0; i < n - 1; ++i)
        for (j = i + 1; j < n; ++j)
            if (*(a+i) > *(a+j)){
                temp = *(a+i);
                *(a+i) = *(a+j);
                *(a+j) = temp;
            }

}

void printArray(int *arr, int size) { 
    
    int i;
    for (i=0; i < size; i++) 
    printf("%d\n", *(arr + i));  

} 

void fillArray(int *arr,int size){

    int i;
    for(i=0;i<size;i++){
        printf("Enter a number for index %d:\n",i);
        scanf("%d",&*(arr+i));
    }
}