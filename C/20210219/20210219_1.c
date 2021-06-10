#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Задача 1. Дефиниране на структура, достъп до членове
#include <stdio.h>
#include <string.h>
struct tagPaper {
unsigned m_nBookId;
char m_szTitle[64];
char m_szAuthor[64];
char m_szSubject[256];
};
*/

struct tagPaper{

    unsigned m_nBookId;
    char m_szTitle[64];
    char m_szAuthor[64];
    char m_szSubject[64];

};

void printPaper(struct tagPaper Paper);

int main(void){

    struct tagPaper Paper1;
    Paper1.m_nBookId = 1;
    strcpy(Paper1.m_szTitle,"Twenty thousand leagues under the sea");
    strcpy(Paper1.m_szAuthor,"Jul Verne");
    strcpy(Paper1.m_szSubject,"Adventure story");
    printPaper(Paper1);

    struct tagPaper Paper2;
    Paper2.m_nBookId = 2;
    strcpy(Paper2.m_szTitle,"Around the world in eighty days");
    strcpy(Paper2.m_szAuthor,"Jul Verne");
    strcpy(Paper2.m_szSubject,"Adventure story");
    printPaper(Paper2);

    struct tagPaper Paper3;
    Paper3.m_nBookId = 3;
    strcpy(Paper3.m_szTitle,"The call of Cthulhu");
    strcpy(Paper3.m_szAuthor,"H. P. Lovecraft");
    strcpy(Paper3.m_szSubject,"Horror story");
    printPaper(Paper3);

    return 0;
}

void printPaper(struct tagPaper Paper){

    printf("Book id: %d\n",Paper.m_nBookId);
    printf("Book title: %s\n",Paper.m_szTitle);
    printf("Book author: %s\n",Paper.m_szAuthor);
    printf("Book subject: %s\n",Paper.m_szSubject);

}