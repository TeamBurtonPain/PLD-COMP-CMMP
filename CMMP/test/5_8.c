#include<inttypes.h>
#include<stdio.h>

char getChar(){
    return 'o';
}

void main(void){
    char a;
    a = getChar();
    putchar(a);
    putchar('\n');
}
