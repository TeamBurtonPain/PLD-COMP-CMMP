#include<inttypes.h>
#include<stdio.h>
void main(void){
    char a='a';
    while(a<='z'){
        putchar(a++);
    }
    putchar('\n');
}
