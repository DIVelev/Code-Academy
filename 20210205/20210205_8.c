#include <stdio.h>
#include <string.h>

/*Задача 8. Напишете функците atoi, itoa, atof и reverse, които писахме
преди като използвате указател вместо индексиране на масив.*/

int atoi(char *s);
void itoa(int n, char s[]);
double atof(char *s);
void reverse(char *s);

int main(void){

    char ai[] = "123";
    printf("Atoi: %d\n",atoi(ai));
    int n = 567;
    char ia[n+1]; // n+1 , защото ако n = 0, то масивът ще е 1 и ще може да се въведе стойност 0
    itoa(n,ia);
    reverse(ia);
    printf("Itoa: %s\n",ia);
    char af[] = "123.45";
    printf("Atof: %lf\n",atof(af));
    char rev[] = "pesho";
    reverse(rev);
    printf("Reverse: %s",rev);

}

int atoi(char *s){

    int n = 0;

    for(;*s;s++){
        n = n*10 + (*s - '0');
    }

    return n;
}

void itoa(int n, char s[]){

    int lastDigit;

    do{

        lastDigit = n%10;
        *s = lastDigit + '0';
        s++;
        n /= 10;

    }while(n>0);

}

double atof(char *s){

    double n = 0, power = 1;

    for (; *s != '.';s++){
        n = n*10 + (*s - '0');
    }

    s++;

    for (;*s;s++){
        n = n*10 + (*s - '0');
        power = power * 10;
    }

    return n/power;
}

void reverse(char *s){

   int length, c;
   char *begin, *end, temp;
 
   length = strlen(s);
   begin = s;
   end = s;
 
   for (c = 0; c < length - 1; c++)
      end++;
 
   for (c = 0; c < length/2; c++)
   {        
      temp   = *end;
      *end   = *begin;
      *begin = temp;
 
      begin++;
      end--;
   }

}