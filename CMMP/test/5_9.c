#include<inttypes.h>
#include<stdio.h>
void main(void){
    int64_t a = 87758;
    putint(a);
    a = a+1;
    putint(a);
    a+=1;
    putint(a);
    putint(a++);

    putint(a);
}
