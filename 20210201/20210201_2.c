#include <stdio.h>

/* Задача 2. Напишете функцията int atof(char *s), която
преобразува стринг в число с десетична запетая. Тази функция е
подобна на разглежданата по-горе atoi(char *s), само че когато се
стигне до . точката, отделяща цялата част от дробната, трябва
да се пусне още един цикъл, който да изчисли числото в
дробната част по същия начин, както е числото в цялата част.
Само че тук при дробната част трябва да имаме една
променлива, която да умножаваме по 10 всеки път до края на
дробната част power *= 10; Накрая трябва да разделим
полученото число на тази променлива, за да получим реалното
число с плаващата заперая на точното място. */

double atoi(char *s);

int main(void){

    char s[] = "123.14";
    printf("%lf",atoi(s));

    return 0;
}

double atoi(char *s){

    int i = 0;
    double result = 0, power = 1;

    for (i; s[i] != '.';i++){

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

    return result/power;
}