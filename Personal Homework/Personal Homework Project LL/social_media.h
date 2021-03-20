#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAXLEN 30
#define BUFFER_SIZE 1000

static const char* userSerialization = "<user>\n<name>%s</name>\n<email>%s</email>\n";
static const char* friendsSerialization = "<name>%s</name>\n<surname>%s</surname>\n";

static const char* userDeserialization = "<user>\n<name>%[^<]</name>\n<email>%[^<]</email>\n";
static const char* friendsDeserialization = "<name>%[^<]</name>\n<surname>%[^<]</surname>\n";

typedef struct UserFriends friends;
typedef struct MainUser user;
typedef struct socialMedia_branch branch;

typedef struct UserFriends{
    char name[MAXLEN];
    char familyName[MAXLEN];
}friends;

typedef struct MainUser{
    char name[MAXLEN];
    char email[MAXLEN];
}user;

typedef struct socialMedia_branch{
    user newUser;
    friends *newFriend;
    int friendsNumber;
    branch *next;
}branch;

extern branch *head;

void init();
void menu(void);
void printUsers(branch *head);
branch *addUser(branch *head);
int checkUserName(char string[]);
int checkEmail(char* string);
branch *addFriends(branch *head);
branch *findUser(branch *head);
void printFriends(branch *head);
void printList(branch *head);
branch *deleteFriends(branch *head);
void serializeToXML(branch *head);
branch *deserializeXML(void);