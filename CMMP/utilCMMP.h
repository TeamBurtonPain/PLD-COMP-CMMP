#pragma once

#include <iostream>
#include <fstream>
#include <vector>
#include <experimental/filesystem>
#include <set>
#include "Program.h"
#include "BinaryAffectation.h"
#include "BinaryExpr.h"
#include "UnaryExpr.h"
#include "FunctionCall.h"
#include "VarContainer.h"
#include "CommonTypes.h"

using namespace std;
using namespace experimental::filesystem;


namespace utilCMMP
{
    // fait le lien entre les appels de fonction et les déclarations. 
    // set le type des appels
    // renvoie le nomde d'erreurs recontrées
    errorReturns linkFunctions(Program *);
    // fait le lien entre les appels de variables et les déclarations. 
    // set le type des appels
    // renvoie le nomde d'erreurs recontrées
    errorReturns linkVariables(Program *, bool warnings); // -a => warnings = true
    // Vérifie que les variables déclarées sont utilisées (et pas que en tant que membreGauche) 
    // renvoie le nomde d'erreurs recontrées
    errorReturns checkUnusedVar(Program *);
    // set le type de toutes les expressions dont les enfants ont des types connus
    // renvoie le nomde d'erreurs recontrées
    errorReturns setTypesAuto(Program *);

    class Indent 
    {
        public:
            Indent(int nb):n(nb){}
            int n;
    };

    const string include_path("include_cmmp/");
    class InfoFunctionInclude{
        public:
            
            
            void readFile(string file){
                ifstream is(file, ios_base::in);
                is >> nb_arg;
                string t;
                for(int i =0; i<nb_arg; ++i){
                    is >> t;
                    arg_type.push_back(TypeUtil::getTypeFromString(t));
                }
                is >> t;
                ret_type = TypeUtil::getTypeFromString(t);
                is.close();
            }

            uint nb_arg;
            vector<Type> arg_type;
            Type ret_type;
    };
}
std::ostream& operator<<(std::ostream& stream, const utilCMMP::Indent &ws);