#include <stdio.h>

/*Задача 6. Пренапишете функцията int linear_search(const int a[], int n, int
key); използайки пойнтер аритмртиката без инкрементиращи променливи.*/

int linear_search(const int a[], int n, int key);
void arrFill(int *s,int length);

int main(void){

    int length,key;
    printf("Enter a length for the array: \n");
    scanf("%d",&length);
    int arr[length];
    arrFill(arr,length);
    printf("Enter a number to search: \n");
    scanf("%d",&key);
    if(linear_search(arr,length,key)){
        
    }
    else{
        printf("Number is not in the array\n");
    }

    return 0;
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