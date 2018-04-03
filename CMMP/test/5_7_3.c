#include<inttypes.h>
#include<stdio.h>

void squarephabet(){
    char a, b = 'a';
    while(b<='z'){
        a='a';
        while(a<='z'){
            putchar(a++);
        }
        b+=1;
        putchar('\n');
    }
    
}

void main(void){
    squarephabet();
}
