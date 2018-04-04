#include<inttypes.h>
#include<stdio.h>
void main(void){
    int64_t a = 87758;
    a = a+1;
    a+=1;
    putint(a++);

    putint(a);
}
