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
        Funct *f = new Funct(Type::VOID, "main");
        /*
        VariableDeclaration * a = new VariableDeclaration(Type::INT64,"a",1,1);
        VariableDeclaration * b = new VariableDeclaration(Type::INT64,"b",2,1);
        VariableDeclaration * c = new VariableDeclaration(Type::INT64,"c",3,1);
        f->addVariable(a);
        f->addVariable(b);
        f->addVariable(c);
        */
        CFG cfg_main(f);
        ofstream file2("IR5-2.s");
        cfg_main.gen_asm(file2);

        file2.close();
    }
    return 0;
}

