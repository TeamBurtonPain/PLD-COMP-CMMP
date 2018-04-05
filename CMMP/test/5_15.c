#include<inttypes.h>
#include<stdio.h>

void f(int32_t a, int32_t b, int32_t c, int32_t d, int32_t e, int32_t f, int32_t g, int32_t h, int32_t i){
    putint(a);
    putint(b);
    putint(c);
    putint(d);
    putint(e);
    putint(f);
    putint(g);
    putint(h);
    putint(i);
}

void main(void){
    f(1,2,3,4,5,6,7,8,8654);
    putint(10);
}
