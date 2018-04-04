#include<inttypes.h>
#include<stdio.h>
void main(void){
    int64_t a, b = 0, c = 1;
    a = b || c;
    putint(a);

    a = b && c;
    putint(a);
    c=0;
    a = b || c;
    putint(a);

    a = b && c;
    putint(a);
    c=1;
    b=1;
    
    a = b || c;
    putint(a);

    a = b && c;
    putint(a);

    b=0;

    a = b || c;
    putint(a);

    a = b && c;
    putint(a);
}
