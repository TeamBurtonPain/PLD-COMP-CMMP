#include "utilCMMP.h"

int utilCMMP::linkFunctions(Program *p)
{
    int error = 0;
    cout << "Function Linking" << endl;

    if (!p->getMainFunction())
    {
        cout << "No main Function found" << endl;
        error = 1;
    }
    cout << "    Functions found:" << endl;
    vector<FunctionCall *> fcList = p->findFunctionCalls();
    for (auto f : fcList)
        cout<<"      "<<f->getName()<<endl;

    //checker les instructions de return avec vector<ReturnInstr> Funct.findReturns()

    //parcourir le programme.

    //si on est sur un functioncall

    //tester si on a la fonction correspondate dans la hashmap
    //ou un putchar ou un getchar
    //tester si les params sont cohérents
    return error;
}
int utilCMMP::linkVariables(Program *p)
{
    cout << "Variables linking" << endl;
    cout << "    Variables found:" << endl;

    vector<VariableCall *> vcList = p->findVarCalls();
    for (auto v : vcList)
        cout<<"      "<<v->getName()<<endl;

    //parcourir le programme.

    //si on est sur un functioncall

    //tester si on a la fonction correspondate dans la hashmap

    //tester si les params sont cohérents
    return 0;
}
