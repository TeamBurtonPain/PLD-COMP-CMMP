#include<inttypes.h>
#include<stdio.h>
void main(void){
    int64_t i = 2, n_wanted, a=1, b=1;
    n_wanted = 12;
    if(n_wanted < 2){
        putchar('o');
    }
    else{
        while(i<n_wanted){
            b=a+b;
            a=b-a;
            i+=1;
        }
        putwchar(b);
    }
    putchar('\n');
}
