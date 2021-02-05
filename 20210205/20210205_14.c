#include <stdio.h>

/*Задача 14. Даден е едномерен масив с N елемента (вие изберете
стойност на N),напишете функция, която изчислява средната стойност на
елементите в масива, като я връща като double float.*/

double averageSum(int *s,int length);

int main(void){

    int length,i=0;
    printf("Enter the length of the array: \n");
    scanf("%d",&length);
    int arr[length];
    for(i;i<length;i++){
        printf("Enter a number for index %d:\n",i);
        scanf("%d",&arr[i]);
    }

    printf("Your array is:\n");
    for(i=0;i<length;i++){
        printf("Number at index %d: %d\n",i,arr[i]);
    }

    printf("Average sum of the numbers in the array is: %lf",averageSum(arr,length));

    return 0;
}

double averageSum(int *s,int length){

    int i=0;
    double average = 0;
    for(i;i<length;i++){
        average += s[i];
    }

    return average/length;

}