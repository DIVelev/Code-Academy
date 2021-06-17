/*  Пренапишете функцията int linear_search(const int a[], int n, int
key); използайки пойнтер аритмртиката без инкрементиращи променливи. */

#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <limits.h>
#include <stdlib.h>

int linearSearch(const int a[], int size, int key);
 
int main(int argc, char *argv[]){
    
    errno = 0;
    int key, size, maxNumber;
    char *p;

// check if there are 3 arguments
    if(argc < 4){
        exit(2);
    }
   
    long conv = strtol(argv[1], &p, 10);
    if (errno != 0 || *p != '\0' || conv > INT_MAX || conv < INT_MIN){
        exit(3);
    }
    else{
        size = conv;
    } 
    
    conv = strtol(argv[2], &p, 10);
    if (errno != 0 || *p != '\0' || conv > INT_MAX || conv < INT_MIN){
        exit(4);
    }
    else{
        maxNumber = conv;
    } 

    conv = strtol(argv[3], &p, 10);
    if (errno != 0 || *p != '\0' || conv > INT_MAX || conv < INT_MIN){
        exit(5);
    }
    else{
        key = conv;
    } 

    int array[size];
    for(int i = 0; i<size; i++){
        array[i] = rand() % maxNumber;
    }

    for(int i = 0;i<size; i++){
        printf("Array[%d]: %d\n", i, array[i]);
    }

    if((linearSearch(array, size, key)) == 0){
        printf("\nKey found!");
    }
    else{
        exit(6);
    }
    

    return 0;
}
int linearSearch(const int a[], int size, int key) {
   int i;
   const int *p;
   p = a;
   for (i = 0; i < size; ++i) {
      if (*p++ == key) return 0;
   }
   return 1;
}
