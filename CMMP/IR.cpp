#include "IR.h"


void CFG::gen_asm_prologue(ostream& o)
{
    o << ".text" << endl;
    o << ast->getName() << ":" << endl;
    o << utilCMMP::Indent (1) << 


}
void CFG::gen_asm_epilogue(ostream& o){

}