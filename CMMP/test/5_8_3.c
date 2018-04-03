#include<inttypes.h>
#include<stdio.h>

char alpha(char i){
    if(i > 'z'){
        putchar('\n');
        return '\0';
    }
    else{
        putchar(i);
        alpha(i+1);
        return '!';
    }
}

void main(void){
    char a = 'a';
    alpha(a);
}
