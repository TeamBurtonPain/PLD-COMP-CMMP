#include "utilCMMP.h"

errorReturns utilCMMP::linkFunctions(Program *p)
{
    errorReturns errors;
    errors.errors = 0;
    errors.warnings = 0;
    cout << "Function Linking" << endl;

    //check presence of main func
    if (!p->getMainFunction())
    {
        cout << "No main Function found" << endl;
        errors.errors++;
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
                errors.errors++;
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
                    errors.errors++;
                }
            }
            else
            {
                cout << "a call to a non-existent function has been found" << endl;
                errors.errors++;
            }
        }
    }
    return errors;
}

errorReturns utilCMMP::linkVariables(Program *p, bool warnings)
{
    errorReturns errors;
    errors.errors = 0;
    errors.warnings = 0;

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
                        v->setCodeName(it->second->getCodeName());
                        if (v->isWrite())
                            it->second->setInit(true);
                        if (v->isRead())
                            it->second->setUsed(true);
                        if (warnings && v->isRead() && !it->second->isInit()){
                            errors.warnings++;
                            cout << "Warning : Read value before initialisation ! " << endl;
                        }
                        else
                            cout << "Ok" << endl;
                        found = true;
                    }
                    else
                    {
                        cout << " - called before local declaration - ";
                        errors.errors++;
                    }
                }
            }
            container = container->getParent();
        }
        if (!found)
        {
            cout << "No corresponding declaration found" << endl;
            errors.errors++;
        }
    }

    return errors;
}

errorReturns utilCMMP::checkUnusedVar(Program *p)
{
    errorReturns errors;
    errors.errors = 0;
    errors.warnings = 0;

    cout << "    Unused var check :" << endl;

    //get every calls
    vector<VariableDeclaration *> v = p->findVarDeclarations();

    for (std::vector<VariableDeclaration *>::size_type i = 0; i != v.size(); i++)
    {
        if (!v[i]->isUsed())
        {
            cout << "      Unused : " << v[i]->getName() << " at l"
                 << v[i]->getLine() << ", c" << v[i]->getColumn() << endl;
        }
    }
    if (!errors.errors)
        cout << "      Ok" << endl;

    return errors;
}
errorReturns utilCMMP::setTypesAuto(Program *p)
{   
    errorReturns errors = p->setTypeAuto();
    /*
    if(errors)
        cout<<"    Errors found during setting Types : "<<errors<<endl;
        */
    return errors;
}

std::ostream &operator<<(std::ostream &stream, const utilCMMP::Indent &ws)
{
    for (int i = 0; i < ws.n; i++)
    {
        stream << "\t";
    }
    return stream;
}
