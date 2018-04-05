#include<inttypes.h>
#include<stdio.h>
void main(void){
    int64_t a, b;
    a=5;
    b=2;
    if(a < b){
        putchar('I');
    }
    else{
        if(a == b){
            putchar('E');
        }
        else{
            putchar('S');
        }
    }
    putchar('\n');

}
