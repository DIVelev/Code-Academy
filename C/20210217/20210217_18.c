#include <stdio.h>
#include <stdlib.h>

/*Задача 18.
В С се използва библиотека за сортиране. Принципно имаме:
Selection Sort
Binary Sort
Merge Sort
Radix Sort
Insertion Sort
Намерете разликите между методите и кой кога е най-бърз.*/

//Selection Sort - намира най-малкото число и го мести на първа позиция, след което повтаря отново търсенето. Бърз е при едномерни integer масиви.
int main(void){
    int a[100], n, i, j, position, swap;
    printf("Enter number of elementsn");
    scanf("%d", &n);
    printf("Enter %d Numbersn", n);
    for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
    for(i = 0; i < n - 1; i++){
        position=i;
        for(j = i + 1; j < n; j++){
            if(a[position] > a[j])
            position=j;
        }
        if(position != i){
        swap=a[i];
        a[i]=a[position];
        a[position]=swap;
        }
    }
    printf("Sorted Array:n");
    for(i = 0; i < n; i++)
    printf("%dn", a[i]);

    return 0;
}

//Binary Sort - метод за намиране на елемент в сортиран масив, но само и единствено в масив, който предварително е подреден. По-бърз е от linear sort, защото има по-малко итерации.

/*int main(void){
    int i, low, high, mid, n, key, array[100];
    printf("Enter number of elementsn");
    scanf("%d",&n);
    printf("Enter %d integersn", n);
    for(i = 0; i < n; i++)
    scanf("%d",&array[i]);
    printf("Enter value to findn");
    scanf("%d", &key);
    low = 0;
    high = n - 1;
    mid = (low+high)/2;
    while (low <= high){
        if(array[mid] < key)
        low = mid + 1;
        else if (array[mid] == key){
        printf("%d found at location %d.n", key, mid+1);
        break;
        }
        else
        high = mid - 1;
    mid = (low + high)/2;
    }
    if(low > high)
    printf("Not found! %d isn't present in the list.n", key);

    return 0;
}*/

//Merge Sort - разделяме array на 2 части, по средата и го съединяваме, докато сортираме. Един от най-бързите и ефективни методи при едномерни масиви.

/*void mergeSort(int arr[], int l, int r){
    
    if (l < r){
        int m = l+(r-l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }

}

void printArray(int A[], int size){
    int i;
    for (i=0; i < size; i++)
    printf("%d ", A[i]);
    printf("n");
}

int main(void){
    int arr[] = {85, 24, 63, 45, 17, 31, 96, 50};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    printf("Given array is n");
    printArray(arr, arr_size);
    mergeSort(arr, 0, arr_size - 1);
    printf("nSorted array is n");
    printArray(arr, arr_size);
    return 0;
}*/

//Radix Sort - най-използваният метод за сортиране на листове, лексикографски или по ред на номер.

/*int get_max (int a[], int n){
   int max = a[0];
   for (int i = 1; i < n; i++)
      if (a[i] > max)
         max = a[i];
   return max;
}
void radix_sort (int a[], int n){
   int bucket[10][10], bucket_cnt[10];
   int i, j, k, r, NOP = 0, divisor = 1, lar, pass;
   lar = get_max (a, n);
   while (lar > 0){
      NOP++;
      lar /= 10;
   }
   for (pass = 0; pass < NOP; pass++){
      for (i = 0; i < 10; i++){
         bucket_cnt[i] = 0;
      }
      for (i = 0; i < n; i++){
         r = (a[i] / divisor) % 10;
         bucket[r][bucket_cnt[r]] = a[i];
         bucket_cnt[r] += 1;
      }
      i = 0;
      for (k = 0; k < 10; k++){
         for (j = 0; j < bucket_cnt[k]; j++){
            a[i] = bucket[k][j];
            i++;
         }
      }
      divisor *= 10;
      printf ("After pass %d : ", pass + 1);
      for (i = 0; i < n; i++)
         printf ("%d ", a[i]);
      printf ("\n");
   }
}
int main(void){
   int i, n, a[10];
   printf ("Enter the number of items to be sorted: ");
   scanf ("%d", &n);
   printf ("Enter items: ");
   for (i = 0; i < n; i++){
      scanf ("%d", &a[i]);
   }
   radix_sort (a, n);
   printf ("Sorted items : ");
   for (i = 0; i < n; i++)
      printf ("%d ", a[i]);
   printf ("\n");
   return 0;
}*/

//Insertion Sort - масива се разделя на сортирана част и такава, която все още  не е сортирана. Взима се елемент от несортираната част и се подрежда в сортираната.
/* Function to sort an array using insertion sort*/
/*void insertionSort(int arr[], int n) { 
    int i, key, j; 
    for (i = 1; i < n; i++){ 
        key = arr[i]; 
        j = i - 1; 
  
        
        while (j >= 0 && arr[j] > key) { 
            arr[j + 1] = arr[j]; 
            j = j - 1; 
        } 
        arr[j + 1] = key; 
    } 
} 
  
void printArray(int arr[], int n) { 
    int i; 
    for (i = 0; i < n; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
} 
  
int main() { 
    int arr[] = { 12, 11, 13, 5, 6 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
  
    insertionSort(arr, n); 
    printArray(arr, n); 
  
    return 0; 
} */
