/* Напишете функцията strncpy(s, t, n), която копира най -
много n символа от t в s  */

#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <limits.h>
#include <stdlib.h>

void mystrncpy(char *s, char *t, int n)
{
    int i = 0, j = 0;
    for(i;s[i] != '\0';i++){
    }
    for (j;j<n;j++,i++){
        s[i] = t[j];
    }
    s[i] = '\0';
    printf("%s\n",s);
}
int main(int argc, char *argv[]){

    char *p;
    errno = 0;
    int pos;

    if(argc < 4){
        exit(2);
    }
    char *s = argv[1];
    char *t = argv[2];
    long conv = strtol(argv[3], &p, 10);
    if (errno != 0 || *p != '\0' || conv > INT_MAX || conv < INT_MIN){
        exit(3);
    }
    else{
        pos = conv;
    }

    int s1Len = strlen(s);
    if (s1Len < pos){
        exit(4);
    }

    mystrncpy(s, t, pos);
    return 0;
}