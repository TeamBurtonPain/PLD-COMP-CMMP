#include <fstream>

#include "IR.h"
#include "Funct.h"

using namespace std;

int main(){
    Funct f(Type::VOID, "main");
    CFG cfg_main(&f);

    ofstream file("IR.s");

    cfg_main.gen_asm(file);
    return 0;
}