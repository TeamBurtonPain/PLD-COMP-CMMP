#include "IR.h"

#include "utilCMMP.h"


void CFG::gen_asm(ostream& o){
    gen_asm_prologue(o);
    //TODO : le reste !

    gen_asm_epilogue(o);
}

void CFG::gen_asm_prologue(ostream& o)
{
    o << ".text" << endl;
    o << ast->getName() << ":" << endl;
    o << utilCMMP::Indent(1) << "pushq %rbp"<<endl;
    o << utilCMMP::Indent(1) << "pushq %rsp, %rbp"<<endl;
    o << utilCMMP::Indent(1) << "subq $"<< 0 << ", %rsp"<<endl;
    
}
void CFG::gen_asm_epilogue(ostream& o){
    o << utilCMMP::Indent(1) << "movq %rbp, %rsp" << endl;
    o << utilCMMP::Indent(1) << "popq %rbp" << endl;
    o << utilCMMP::Indent(1) << "ret" << endl;
}