#include <fstream>

#include "IR.h"
#include "Funct.h"

using namespace std;

int main(){
    /* 5.1 test 
    {
        Funct f(Type::VOID, "main");
        CFG cfg_main(&f);

        ofstream file1("IR5-1.s");
        cfg_main.gen_asm(file1);
        file1.close();
    } */
    /* 5.2 test */
    {
        Funct f(Type::VOID, "main");
        CFG cfg_main(&f);
        VariableDeclaration * a = new VariableDeclaration(Type::INT64,"a",1,1);
        f.addVariable(a);
        ofstream file2("IR5-2.s");
        cfg_main.gen_asm(file2);

        file2.close();
    }
    return 0;
}