/*Задача 3.
С увеличаване на надморската височина температурата намалява с
около 0,5ºC на всеки 100м. Нека приемем, че атмосферното налягане е нормално.
Ако се знае температурата (ХºC) на хижа Вихрен (1950 метра над морското
равнище), да се изчисли каква е температурата на връх Вихрен (2918 метра над
морското равнище). Ако се знае температурата (УºC) на връх Вихрен, да се изчисли
каква е температурата на хижа Вихрен.
Изход 1:
Ако атмосферното налягане е нормално и температурата на хижа Вихрен (1950м
н.м.р.) е ... ºC , то температурата на връх Вихрен (2918м н.м.р.) е ... ºC.
Изход 2:
Ако атмосферното налягане е нормално и температурата на връх Вихрен (2918м
н.м.р.) е ... ºC , то температурата на хижа Вихрен (1950м н.м.р.) е ... ºC.*/
 
#include <stdio.h>
 
static const int hutHeight = 1950;
static const int peakHeight = 2918;
static const int diffHeight = peakHeight - hutHeight;
static const float tempChangePer100 = 0.5;
void weatherInfo(void); 
 
int main(void){
    weatherInfo();
 
 
    return 0;
}
 
void weatherInfo(void){
    float hutTemp, peakTemp,fTempChange;
    int choice,iTempChange;
    printf("To find the temp of the peak press 1. To find the temp of the hut press 2:\n");
    scanf("%i",&choice);
    if ( choice == 1){
        printf("Enter the temp at the hut:\n");
        scanf("%f",&hutTemp);
        iTempChange = diffHeight / 100;
        fTempChange = (float)(iTempChange);
        fTempChange *= tempChangePer100;
        peakTemp = hutTemp - fTempChange;
        printf("If the atmospheric pressure is normal the temp at hut Vihren (1950m) is %.2f degrees and the temp at peak Vihren(2918m) is %.2f degrees.The difference is: %.2f degrees \n",hutTemp,peakTemp,fTempChange);
 
    }else if (choice == 2){
        printf("Enter the temp at the peak:\n");
        scanf("%f",&peakTemp);
        iTempChange = diffHeight / 100;
        fTempChange = (float)(iTempChange);
        fTempChange *= tempChangePer100;
        hutTemp = peakTemp + fTempChange;
        printf("If the atmospheric pressure is normal the temp at peak Vihren(2918m) is %.2f degrees and the temp at hut Vihren (1950m) is %.2f. The difference is %.2f.\n",
        peakTemp,hutTemp,fTempChange);
    }
}
