#include "IR.h"

#include "utilCMMP.h"


void CFG::gen_asm(ostream& o){
    gen_asm_prologue(o);
    //TODO : le reste !

    gen_asm_epilogue(o);
}


void CFG::gen_asm_prologue(ostream& o){

    o << utilCMMP::Indent(1) << ".text" << endl;
    o << utilCMMP::Indent(1) << ".globl" << utilCMMP::Indent(1) << ast->getName() << endl;
    o << utilCMMP::Indent(1) << ".type" << utilCMMP::Indent(1) << ast ->getName() << ", @function"  << endl;

    o << ast->getName() << ":" << endl;
    o << utilCMMP::Indent(1) << "pushq" << utilCMMP::Indent(1) << "%rbp"<<endl;
    o << utilCMMP::Indent(1) << "movq" << utilCMMP::Indent(1) << "%rsp, %rbp"<<endl;
    o << utilCMMP::Indent(1) << "subq" << utilCMMP::Indent(1) << "$"<< 0 << ", %rsp"<<endl;
    
}
void CFG::gen_asm_epilogue(ostream& o){
    o << utilCMMP::Indent(1) << "movq" << utilCMMP::Indent(1) << "%rbp, %rsp" << endl;
    o << utilCMMP::Indent(1) << "popq" << utilCMMP::Indent(1) << "%rbp" << endl;
    o << utilCMMP::Indent(1) << "ret" << endl;
}