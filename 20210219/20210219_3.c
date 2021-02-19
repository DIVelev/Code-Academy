#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Задача 3. Указатели към структура, предаване на структура на функция по
стойност и по референция
#include <stdio.h>
#include <string.h>
struct tagPaper {
unsigned m_nBookId;
char m_szTitle[64];
char m_szAuthor[64];
char m_szSubject[256];
};
void printPaper( struct tagPaper paper ) { /* by value */
/*printf( "Paper id : %d\n", paper.m_nBookId);
printf( "Paper title : %s\n", paper.m_szTitle);
printf( "Paper author : %s\n", paper.m_szAuthor);
printf( "Paper subject : %s\n", paper.m_szSubject);
}*/


struct tagPaper{

    unsigned m_nBookId;
    char m_szTitle[64];
    char m_szAuthor[64];
    char m_szSubject[64];

};

void printPaper(struct tagPaper Paper);
void printPaperWithPointer(struct tagPaper *Paper);

int main(void){

    struct tagPaper Paper1;
    Paper1.m_nBookId = 1;
    strcpy(Paper1.m_szTitle,"Twenty thousand leagues under the sea");
    strcpy(Paper1.m_szAuthor,"Jul Verne");
    strcpy(Paper1.m_szSubject,"Adventure story");
    printPaper(Paper1);
    printf("Printing book with pointer:\n");
    printPaperWithPointer(&Paper1);

    return 0;
}

void printPaper(struct tagPaper Paper){

    printf("Book id: %d\n",Paper.m_nBookId);
    printf("Book title: %s\n",Paper.m_szTitle);
    printf("Book author: %s\n",Paper.m_szAuthor);
    printf("Book subject: %s\n",Paper.m_szSubject);

}

void printPaperWithPointer(struct tagPaper *Paper){

    printf("Book id: %d\n",Paper->m_nBookId);
    printf("Book title: %s\n",Paper->m_szTitle);
    printf("Book author: %s\n",Paper->m_szAuthor);
    printf("Book subject: %s\n",Paper->m_szSubject);

}