#include <stdio.h>

/*7. Напишете един глобален масив, който съдържа на всяка позиция броя на
дните от месеца. Направете функция, която на която се подават като
аргументи година, месец и ден. На база на това функцията трябва да върне
поредния ден от годината. Например 1 март е 60 тия ден от годината.*/

extern int arr[13]; // 13, защото първият елемент с индекс 0 е 0, за да може месеците да са от 1 до 12
int dayOfTheYear(int day,int month,int year);

int main(void){

    int day,month,year;
    printf("Enter a day: \n");
    scanf("%d",&day);
    if(day<1 || day>31){
        while (day<1 || day>31){
            printf("Enter a valid day, between 1 and 31: \n");
            scanf("%d",&day);
        }
    }
    printf("Enter month: \n");
    scanf("%d",&month);
    if(month<1 || month>12){
        while (month<1 || month>12){
            printf("Enter a valid month, between 1 (January) and 12(December): \n");
            scanf("%d",&month);
        }
    }
    printf("Enter year: \n");
    scanf("%d",&year);

    printf("Day of the year: %d\n",dayOfTheYear(day,month,year));

    return 0;
}

int arr[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

int dayOfTheYear(int day,int month,int year){

    if(year%4 == 0 || year%400 == 0){
        printf("Leap year! \n");
        arr[2] = 29;
    }

    int i,sum = 0;

    for(i;i<month;i++){
        sum += arr[i]; 
    }

    return sum + day;

}