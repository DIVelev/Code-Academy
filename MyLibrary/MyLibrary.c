#include "MyLibrary.h"

void printStr(char *s){

    int i = 0;
    
    for (i;s[i] != '\0';i++){
        printf("%c",s[i]);
    }
}

int sum(int *s){

    int i,sum=0,*p = &s[1];
    for(i=1;i<9;i++){
        if(i%2 != 0){  // Проверка за четна позиция. Започваме от 1-вия елемент, заради поинтъра и продължаваме до последния, като трябва да са нечетни, за да се сумират четните позиции.
            sum = sum + *(p+i);
        }
    }

    return sum + *(s+0);
}

void palindromeCheck(char *s){

    int start = 0;
    int end = strlen(s) - 1; // Без '\0'
    if (s[end] == '?' || s[end] == '.' || s[end] == '!'){       // Премахвам знаците за край на изречението, за да се провери самото изречение.
        while(s[end] == '?' || s[end] == '.' || s[end] == '!' ){
            end--;
        }
    }

    while(end > start){
        if (s[start++] != s[end--]){
            printf("The string is not a palindrome\n");
            return;
        }
    }
    printf("The string is a palindrome\n");
}


void generatePwd(){

    srand((unsigned)time(NULL));
    int i;
    char pwd[6];
    int random;
    for(i=0;i<6;i++){

        random = (rand() % 2) + 1;
        if(random == 1)
        pwd[i] = 65 + rand() % 26;
        if(random == 2)
        pwd[i] = 97 + rand() % 26;

    }
    pwd[i] = '\0';
    printf("Generated password is: %s\n",pwd);
}

int sum_array(const int a[], int n){
    
    int i, sum = 0;

    for(i = 0; i < n; i++){
        sum += *(a+i);
    }

    return sum;
}

int linear_search(const int a[], int n, int key){

    int i;
    int count = 0;
    for(i=0;i<n;i++){
        if(*(a+i) == key){
            printf("%d found at index %d of the array\n",key,i);
            count++;
        }
    }
    if (count > 0){
        printf("%d found %d times in the array\n",key,count);
        return 1;
    }
    else{
        if (count == 0){
            return 0;
        }
    }

}

//Zapulvane na array
void arrFill(int *s,int length){

    int i;
    for(i=0;i<length;i++){
        printf("Enter an element for index %d: \n",i);
        scanf("%d",&s[i]);
    }

    printf("Your array is: \n");
    for(i=0;i<length;i++){
        printf("Element at %d: %d\n",i,s[i]);
    }

}

//Quicksort
void swap(int* a, int* b){ 
    int t = *a; 
    *a = *b; 
    *b = t; 
}

int partition (int *arr, int low, int high){ 

    int pivot = *(arr + high);
    int i = (low - 1);
  
    for (int j = low; j <= high - 1; j++){
        if (*(arr + j) < pivot){
            i++;
            swap(&*(arr + i), &*(arr + j)); 
        } 
    }
    
    swap(&*(arr + i + 1), &*(arr + high)); 
    return (i + 1); 
} 

void quickSort(int *arr, int low, int high) { 

    if (low < high){ 
        int pi = partition(arr, low, high); 
        quickSort(arr, low, pi - 1); 
        quickSort(arr, pi + 1, high); 
    } 

}

//Printirane na array
void printArray(int *arr, int size) { 
    
    int i;
    for (i=0; i < size; i++) 
    printf("%d\n", *(arr + i));  

} 

//Array with random numbers
void fillArrayWithRandomNum(int *arr,int size){

    srand((unsigned)time(NULL));
    int i,j;
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            *((arr + size*i) + j) = rand() % 11;
        }
    }

}

//Generate pwd with pointer
char* generatePwdwithP(char* arr,unsigned int sLetters,unsigned int cLetters,unsigned int symbols,unsigned int numbers){

    srand((unsigned)time(NULL));
    int k = 0;
    for(k=0;k<sLetters;k++){
        *(arr+k) = 'a' + (rand() % 26);
    }
    for(k;k<(cLetters + sLetters);k++){
        *(arr+k) = 'A' + (rand() % 26);
    }
    for(k;k<(symbols+cLetters+sLetters);k++){
        *(arr+k) = 33 + (rand() % 10);
    }
    for(k;k<(numbers+symbols+cLetters+sLetters);k++){
        *(arr+k) = '0' + (rand() % 10);
    }

    *(arr+k) = '\0';

    return arr;

}

//Shuffle array
char* shuffleArray(char* arr,unsigned int size){

   srand((unsigned)time(NULL));
   int i,j;
   for(i = size-1; i > 0; i--) {
        j = rand() % (i+1);
        swap(&arr[i], &arr[j]);
    }

    return arr;
}

//Merge array
int* mergeArrays(int* arr1,int* arr2,int size1,int size2,int *result){

    int i = 0,j = 0,k = 0;
    while(i<size1 && j<size2){
        if(arr1[i] < arr2[j]){
            result[k++] = arr1[i++];
        }
        else{
            result[k++] = arr2[j++];
        }
    }

    while(i<size1){
        result[k++] = arr1[i++];
    }

    while(j<size2){
        result[k++] = arr2[j++];
    }

    return result;
}

//Bubble sort method
int* bubbleSort(int *arr,int size){

    int i,j,swap;

    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            if(arr[j] > arr[j+1]){
                swap = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = swap;
            }
        }
    }

    return arr;
}

//Bubble sort with char
char* bubbleSortAWriteToB(const char a[], char b[],int len){
    char temp;
    int i,j;

    for (i = 0; i < len; i++){
        b[i] = a[i];
    }

    for(i = 0; i < len; i++){
        for(j = i + 1; j < len - 1; j++){
            if(b[j-1] > b[j]){
                temp = b[j];
                b[j] = b[j-1];
                b[j-1] = temp;
            }
        }   
    }

    return b;
}

//2D array
void arrFill2D(int row,int columns,int arr[row][columns]){
    
    int i,j;

    for(i=0;i<row;i++){
        for(j=0;j<columns;j++){
            printf("Enter value for arr[%d][%d]:", i, j);
            scanf("%d",&arr[i][j]);
        }
    }

    printf("Your array is: \n");
    for(i=0;i<row;i++){
        for(j=0;j<columns;j++){
            printf("Value at arr[%d][%d]: %d\n", i, j,arr[i][j]);
        }
    }
    
}

void rowAverage(int row,int columns,int arr[row][columns]){

    int i,j,count;
    double rowAvg = 0;
    for(i=0;i<row;i++){
        rowAvg = 0;
        count = 0;
        for(j=0;j<columns;j++){
            rowAvg += arr[i][j];
            count++;
        }
        printf("Average for row number %d is: %lf\n",i,rowAvg/count);
    }
}

void colAverage(int row,int columns,int arr[row][columns]){
    
    int i,j,count;
    double colAvg = 0;
    for(j=0;j<columns;j++){
        colAvg = 0;
        count = 0;
        for(i=0;i<row;i++){
            colAvg += arr[i][j];
            count++;
        }
        printf("Average for column number %d is: %lf\n",j,colAvg/count);
    }
}