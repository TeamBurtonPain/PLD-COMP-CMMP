#include "utilCMMP.h"

int utilCMMP::linkFunctions(Program *p)
{
    int error = 0;
    cout << "Function Linking" << endl;

    if (!p->getMainFunction())
    {
        cout << "No main Function found" << endl;
        error++;
    }
    cout << "    Function calls found:" << endl;
    vector<FunctionCall *> fcList = p->findFunctionCalls();

    for (auto f : fcList)
    {
        cout << "      " << f->getName() << " : ";

        if (!f->getName().compare("main"))
        {
            cout << "a call to main has been found" << endl;
        }
        else if (!f->getName().compare("putchar"))
        {
            if (f->getArgs().size() == 1)
            {
                f->setType(Type::VOID);
                cout << "call to putchar has been found" << endl;
            }
            else
            {
                cout << "invalid call to putchar has been found" << endl;
                error++;
            }
        }
        else if (!f->getName().compare("getchar"))
        {
            if (f->getArgs().size() == 0)
            {
                f->setType(Type::CHAR);
                cout << "call to getchar has been found" << endl;
            }
            else
            {
                cout << "invalid call to getchar has been found" << endl;
                error++;
            }
        }
        else
        {

            hashmap<string, Funct *>::const_iterator it = p->getFunctions().find(f->getName());
            
            if (it != p->getFunctions().end())
            {
                if (f->getArgs().size() == it->second->getParams().size())
                {
                    
                    f->setType(it->second->getType());
                    cout << "Ok" << endl;
                    
                }
                else
                {
                    cout << "No function found with the same number of arguments" << endl;
                    error++;
                }
            }
            else
            {
                cout << "a call to a non-existent function has been found" << endl;
                error++;
            }
        }
    }
    return error;
}
int utilCMMP::linkVariables(Program *p)
{
    cout << "Variables linking" << endl;
    cout << "    Variable calls found:" << endl;

    vector<VariableCall *> vcList = p->findVarCalls();
    for (auto v : vcList)
        cout << "      " << v->getName() << endl;

    //parcourir le programme.

    //si on est sur un functioncall

    //tester si on a la fonction correspondate dans la hashmap

    //tester si les params sont cohérents
    return 0;
}
