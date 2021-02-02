#include <stdio.h>

/* Упражнение 3.* Добавете проверка във функцията int atof(char
*s) дали подаденият стринг няма показни позиции преди числото
и, ако има, ги премахнете. Проверете дали числото не е
отрицателно и, ако е така, включете знака в резултата. */

double atoi(char *s);

int main(void){

    char s[] = "aswer-123.14";
    printf("%lf",atoi(s));

    return 0;
}

double atoi(char *s){

    int i = 0,flag = 0;
    double result = 0, power = 1;

    for (i; s[i] != '.';i++){
        
        if(s[i] == '-' && (s[i+1] >= '0' || s[i+1] <= '9'))
        flag = 1;
        

        if (s[i] >= '0' && s[i] <= '9'){
            result = result * 10 + (s[i] - '0');
        }

    }

    i++;

    for (i;s[i] != '\0';i++){
        result = result * 10 + (s[i] - '0');
        power = power * 10;
    }

    s[i] = '\0';
    if(flag == 1){
        return (-result/power);
    }
    else{
        return result/power;
    }
}