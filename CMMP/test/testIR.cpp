#include <fstream>

#include "IR.h"
#include "Funct.h"

using namespace std;

int main(){
    /* 5.1 test */
    Funct f(Type::VOID, "main");
    CFG cfg_main(&f);

    ofstream file("IR5-1.s");

    cfg_main.gen_asm(file);
    return 0;
}