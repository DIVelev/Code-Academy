#include <stdio.h>
#include <stdlib.h>

/*Задача 11.

Ако имеме дефинирано макро
#define М
кои от по долните дефиниции ще пропаднат:
а) #if M
b) #ifdef M
c) #ifndef M
d) #if defined(M)
e) #if !defined(M)*/

// Ще отпаднат:
// e) #if !defined(M), защото макросът е дефиниран и тази проверка ще върне 0
// c) #ifndef M //, отново, защото макросът е дефиниран и тази проверка ще върне 0
// D и B връщат 1, защото макросът е дефиниран, а a) проверява спрямо условие.