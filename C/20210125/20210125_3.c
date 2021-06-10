#include <stdio.h>

int main(void){
    char c;
    int sc = 0, tc = 0, nc = 0;

    while((c = getchar()) !=EOF){
        if (c == '\n')
        nc++;
        if (c == ' ')
        sc++;
        if (c == '\t')
        tc++;
    }
    printf("Space: %d\nTab: %d\nNew row: %d\n",sc,tc,nc);
    return 0;
}