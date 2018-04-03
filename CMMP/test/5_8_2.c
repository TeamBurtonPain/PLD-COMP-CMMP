#include<inttypes.h>
#include<stdio.h>

int64_t fib(int64_t i){
    if(i < 3){
        return 1;
    }
    else{
        return fib(i-1) + fib(i-2);
    }
}

void main(void){
    int64_t a;
    int64_t n = 11;
    a = fib(n);
    putchar(a);
    putchar('\n');
}
