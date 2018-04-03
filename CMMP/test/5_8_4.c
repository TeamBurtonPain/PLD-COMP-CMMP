#include<inttypes.h>
#include<stdio.h>

void putint(int64_t n){
    if(n == 0){
        putchar('0');
    }

    int64_t pow = 1;
    int32_t digit = 1;

    while(pow <= n){
        pow *= 10;
    }
    pow /= 10;
    while(pow != 0){
        digit = 1;
        while((digit * pow) <= n){
            digit++;
        }
        digit--;
        putchar('0'+digit);
        n -= digit * pow;
        pow /= 10;
    }
    putchar('\n');
}

void main(void){
    putint(32);
}
