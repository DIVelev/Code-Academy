#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void printStr(char *s);

int sum(int *s);

void palindromeCheck(char *s);

void generatePwd();

int sum_array(const int a[], int n);

int linear_search(const int a[], int n, int key);

void arrFill(int *s,int length);

//Quicksort
void swap(int* a, int* b);

int partition (int *arr, int low, int high); 

void quickSort(int *arr, int low, int high);

void printArray(int *arr, int size); 


//Random numbers
void fillArrayWithRandomNum(int *arr,int size);

//Generate pwd with pointer
char* generatePwdwithP(char* arr,unsigned int sLetters,unsigned int cLetters,unsigned int symbols,unsigned int numbers);

//Shuffle array
char* shuffleArray(char* arr,unsigned int size);

//Merge array
int* mergeArrays(int* arr1,int* arr2,int size1,int size2,int *result);

//Bubble sort method
int* bubbleSort(int *arr,int size);

//Bubble sort with char
char* bubbleSortAWriteToB(const char a[], char b[],int len);

//2D array
void arrFill2D(int row,int columns,int arr[row][columns]);

void rowAverage(int row,int columns,int arr[row][columns]);

void colAverage(int row,int columns,int arr[row][columns]);
