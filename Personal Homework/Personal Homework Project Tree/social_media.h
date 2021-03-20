#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#define MAXLEN 30

typedef struct mainUser{
    char* name;
    char* email;
    user *left;
    user *right;
}user;

user* root;

typedef int (*Compare)(const char*, const char*);

void insert(char* name,char* email,user** leaf,Compare cmp);
int cmpStr(const char* str1,const char* str2);
char* inputName(void);
char* inputEmail(void);
void orderUser(user* root);
void search(char* name,char* email,user** leaf,Compare cmp);
void delete_tree(user** leaf);
void menu(void);
