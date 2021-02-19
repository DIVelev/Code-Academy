#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Задача 2. Инициализиране на структура, вложени структури
#include <stdio.h>
#include <string.h>
struct tagDetail {
unsigned m_uAcadId;
char m_szAcadName[BUFSIZ];
char m_szAcadUrl[BUFSIZ];
};
struct tagCadet {
unsigned m_uCadetId;
char m_CadetName[BUFSIZ];
float m_uAverageRating;
struct tagDetail m_detail;
};*/

struct tagDetail {
    unsigned m_uAcadId;
    char m_szAcadName[BUFSIZ];
    char m_szAcadUrl[BUFSIZ];
};

struct tagCadet {
    unsigned m_uCadetId;
    char m_CadetName[BUFSIZ];
    float m_uAverageRating;
    struct tagDetail m_detail;
};

void printCadet(struct tagCadet Cadet);

int main(void){

    
    struct tagCadet cadet1 = { 1, "Ivan Ivanov", 5.52,
    {13,"Code Academy","https://codeacademy.bg"}};
    printCadet(cadet1);

    struct tagCadet cadet2;
    cadet2.m_uCadetId = 2;
    strcpy(cadet2.m_CadetName,"Petur Petrov");
    cadet2.m_uAverageRating = 4.33;
    cadet2.m_detail.m_uAcadId = 233;
    strcpy(cadet2.m_detail.m_szAcadName,"Test");
    strcpy(cadet2.m_detail.m_szAcadUrl,"google.com");
    printCadet(cadet2);

    return 0;
}

void printCadet(struct tagCadet cadet){

    printf("Cadet Id is: %d\n",cadet.m_uCadetId);
    printf("Name is: %s\n", cadet.m_CadetName);
    printf("Rating (2-6) is: %f\n", cadet.m_uAverageRating);
    printf("Academy Id is: %d\n", cadet.m_detail.m_uAcadId);
    printf("Name is: %s\n", cadet.m_detail.m_szAcadName);
    printf("URL is: %s\n", cadet.m_detail.m_szAcadUrl);


}