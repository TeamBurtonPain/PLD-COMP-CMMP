#include "utilCMMP.h"

/**
 * 
 */
int utilCMMP::linkFunctions(Program *p)
{
    int error = 0;
    cout << "Function Linking" << endl;

    //check presence of main func
    if (!p->getMainFunction())
    {
        cout << "No main Function found" << endl;
        error++;
    }
    cout << "    Function calls found:" << endl;
    //get every calls
    vector<FunctionCall *> fcList = p->findFunctionCalls();
    //for each call
    for (auto f : fcList)
    {
        cout << "      " << f->getName() << " : ";
        //a call to a main
        if (!f->getName().compare("main"))
        {
            cout << "a call to main has been found" << endl;
        }
        //a call to putchar
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
        //a call to getchar
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
        //a call to another function
        else
        {

            hashmap<string, Funct *>::const_iterator it = p->getFunctions().find(f->getName());

            if (it != p->getFunctions().end())
            {
                if (f->getArgs().size() == it->second->getVariables().size())
                {

                    f->setType(it->second->getType());
                    f->setReference(it->second);
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
int utilCMMP::linkVariables(Program *p, bool warnings)
{
    uint error = 0;
    cout << "Variables linking" << endl;
    cout << "    Variable calls found:" << endl;

    //get every calls
    vector<VariableCall *> vcList = p->findVarCalls();

    //for each call
    for (auto v : vcList)
    {
        cout << "      " << v->getName() << " : ";
        Parent *container = v->getParent();

        bool found = false;
        while (container != NULL && !found)
        {
            VarContainer *vc = dynamic_cast<VarContainer *>(container);
            if (vc)
            {
                hashmap<string, VariableDeclaration *>::const_iterator it = vc->getVariables().find(v->getName());

                if (it != vc->getVariables().end())
                {
                    if (v->getLine() > it->second->getLine() ||
                        (v->getLine() == it->second->getLine() && v->getColumn() > it->second->getColumn()))
                    {
                        v->setType(it->second->getType());
                        v->setReference(it->second);
                        if (v->isWrite())
                            it->second->setInit(true);
                        if (v->isRead())
                            it->second->setUsed(true);
                        if (warnings && v->isRead() && !it->second->isInit())
                            cout << "Warning : Read value before initialisation ! "<<endl;
                        else
                            cout << "Ok" << endl;
                        found = true;
                    }
                    else
                    {
                        cout << " - called before local declaration - ";
                    }
                }
            }
            container = container->getParent();
        }
        if (!found)
        {
            cout << "No corresponding declaration found" << endl;
            error++;
        }
    }
    return error;
}
