#include <stdio.h>

int main(void){
    char c;
    int count = 0;
    c = getchar();
    while(c = getchar() !=EOF){
        count++;
    }
    printf("%d",count);
    return 0;
}