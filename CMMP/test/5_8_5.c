#include<inttypes.h>
#include<stdio.h>

int64_t getint(){
    int64_t base = 10, res = 0, c = 1;
    int32_t read;
    while(c == 1){
        read = getchar();
        if(read < '0' ){
            c=0;
        }
        if(read > '9' ){
            c=0;
        }
        if(c == 1){
            res = res * base + (read-'0');
        }
    }
    return res;
}

void main(void){
    int64_t a = getint();
    putint(a+1);
}
