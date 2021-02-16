#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Задача 21. Напишете функция, която сортира лексикографски масив от
символи (char[]) използвайки qsort.*/

int cstring_cmp(const void *a, const void *b);
void print_cstring_array(char **array, size_t len);
void sort_cstrings_example();

int main(void){

    sort_cstrings_example(); 

    return 0;
}

int cstring_cmp(const void *a, const void *b){

    const char **ia = (const char **)a;
    const char **ib = (const char **)b;

    return strcmp(*ia, *ib);
}

void print_cstring_array(char **array, size_t len)
{
    size_t i;

    for(i=0; i<len; i++)
    printf("%s | ", array[i]);

    putchar('\n');
}

void sort_cstrings_example()
{
    char *strings[] = { "Gosho", "Alex", "Teodora", "Pesho", "Dimitar"};
    size_t strings_len = sizeof(strings) / sizeof(char *);

    puts("***String sorting...");

    print_cstring_array(strings, strings_len);

    qsort(strings, strings_len, sizeof(char *), cstring_cmp);

    print_cstring_array(strings, strings_len);
}