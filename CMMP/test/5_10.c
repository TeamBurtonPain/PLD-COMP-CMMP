#include<inttypes.h>
#include<stdio.h>
void main(void){
    int64_t a[3], b;
    a[1] = 2;
    putint(a[1]);
    b=8;
    putint(b);
    putint(a[1]);

    a[2] = 1;
    a[0] = 3;
    putint(a[0]);
    putint(a[2]);
    putint(a[1]);

   
}
