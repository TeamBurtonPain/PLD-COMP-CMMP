#include<inttypes.h>
#include<stdio.h>
void main(void){
    char alpha = 'a';
    while(alpha <= 'z'){
        putchar(alpha++);
    }
    putchar('\n');
}
