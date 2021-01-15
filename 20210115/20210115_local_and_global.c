#include <stdio.h>

void call();
void stat();
void global();

int a = 10;

int main(void) 
{
printf("a = %d\n", a);
int a = 1;
printf("main a = %d\n", a);
{
int a = 100;
printf("main a = %d\n", a);
}

call();
{
global();
global();
}
global();
{
stat();
stat();
stat();
stat();
}
return 0;
}

void call(){
int a = 2;
printf("a = %d\n", a);
}
void global(){
a += 5;
printf("a = %d\n", a);
}
void stat(){
static int a = 0;
a += 1;
printf("a = %d\n", a);
}
