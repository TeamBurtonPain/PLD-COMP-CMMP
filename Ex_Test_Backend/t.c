#include<inttypes.h>
#include<stdio.h>
void truc(void){
    char a = 't';
    char b = '\n';
    char c = '\24';
    putchar(c);
    /*long long z=3;
    long long d=3;*/
    truc();
}

void main(void){
    truc();
    long long a;
}

