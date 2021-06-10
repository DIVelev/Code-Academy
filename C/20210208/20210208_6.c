#include <stdio.h>

/*6. Напишете функция, която получава указател към масив с числа и връща
най-голямото от тях. */

int findMax(double *arr,int length);

int main(void){

    int arrLength,i;
    printf("Enter the length of the array\n");
    scanf("%d",&arrLength);
    if(arrLength < 0){
        while (arrLength<0){
            printf("Length must be above 0\n");
            scanf("%d",&arrLength);
        }
    }
    double arr[arrLength];

    for (i;i<arrLength;i++){
        printf("Enter a number for index number %d: \n",i);
        scanf("%lf",&arr[i]);
    }

    for (i = 0;i<arrLength;i++){
        printf("Value of %d index is: %lf \n",i,arr[i]);
    }

    printf("After using findMax - index of the biggest number is: %d\n",findMax(arr,arrLength));

    return 0;
}

int findMax(double *arr,int length){

    double max = arr[0];
    int i,indexOfMax;

    for (i=0;i<length;i++){
        if(max<arr[i]){
            max = arr[i];
            indexOfMax = i;
        }
    }
    
    printf("The biggest number in the array is: %lf\n",max);
    return indexOfMax;
}