#pragma once

#include <iostream>
#include <vector>
#include "Program.h"
#include "BinaryAffectation.h"
#include "BinaryExpr.h"
#include "UnaryExpr.h"
#include "FunctionCall.h"
#include "VarContainer.h"
#include "CommonTypes.h"

using namespace std;



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
}
std::ostream& operator<<(std::ostream& stream, const utilCMMP::Indent &ws);