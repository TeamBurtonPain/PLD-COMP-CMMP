# Projet Compilation langage C(--)+

Auteurs :

- Clara Pourcel
- Hubert Hamelin
- Lucas Ouaniche
- Thibault Douzon
- Thomas Sassano
- Victor Morel

## Antlr

Projet réalisé avec l'outil Antlr4 vers une cible C++

## Visual Studio Code

Projet réalisé avec l'éditeur Visual Studio Code.
Les extensions suivantes ont particulièrement été utiles lors du développement :

- ANTLR4 grammar syntax support de Mike Lischke
- Doxygen Documentation Generator de Christoph Schlosser
- Settings Sync de Shan Khan


## Makefile

Voici les cibles disponibles :

- Par défaut : compilation du projet de compilateur C(--)+ vers un binaire "exe" qui peut prendre en premier argument un nom de fichier à compiler.
- grammar : compile la grammaire ANTLR4. Attention, il est nécessaire de disposer de la librairie ANTLR dans le dossier /lib de la machine (voir Pour LINUX).
- testFront : compile les fichiers de test du front end. Ces tests utilisent la librairie Google de test pour le C++. Afin d'exécuter ces test, il faut lancer le binaire "test" dans le dossier CMMP/test.
- testBack : compile à l'aide de l'exécutable du projet les différent fichiers de test du backend. Ces test peuvent être exécutés en utilisant le script "mktest.sh" dans CMMP/test/testBack.

- clean : nettoie les fichiers .o du projet mais pas des tests.
- cleantest : nettoie les fichiers .o des tests

## Résultats

### Front End

- Vérification statique des déclarations de variables, avec controle de la précédence.
- Vérification statique des déclarations de fonctions, avec controle du nombre d'arguments.
- Vérification statique des variables non utilisées en right hand side.
- Vérification statique des variables utilisées en right hand side avant d'avoir été initialisées (Ne prend pas en compte les éventuels branchements conditionnels)

- Vérification statique des types des expressions et conversions faites.

### Back End

- Les prologues et épilogues de fonctions permettent le changement de contexte sans heurt.
- Il est possible d'appeler une fonction putchar ou getchar et d'en récupérer la sortie.
- Les affectations suivantes sont toutes implémentée : [=, +=, -=, *=, /=, %=], et les post/pré incr/decrémentations aussi et suivent le standart C.
- Les expressions arithmétiques respectent les priorités d'opérateur courants.
- Les opérateurs de comparaison suivant sont fonctionnels et retournent une valeur 0 (faux) ou 1 (vrai) [==, !=, <, <=, >, >=].
- Les opérateurs logiques ET et OU sont fonctionnels et sont fénéants.
- Les structures conditionnelles IF ELSE sont fonctionnelles et peuvent être imbriquées.
- Les structures itératives WHILE sont fonctionnelles et peuvent être imbriquées.
- Les fonctions codées permettent le retour de valeur et peuvent prendre autant de paramètres que voulu (en respectant l'ABI C : les 6 premiers sont passés par registre, les suivant sont empilés dans l'ordre inverse).
- Les tableaux sont implémentés et permettent d'allouer une taille constante. Il n'est pas possible de mettre une taille différente d'une constante numérique actuellement. De même l'initialisation par bracket n'est pas implémentée et aucune erreur ne sera remontée à l'utilisateur. Dans ce cas, le tableau sera alloué mais non initalisé, l'exécution sera imprévisible.
- Ajout : Afin de pouvoir afficher des nombres et en lire depuis l'entrée standart, deux fonctions putint et getint sont implémentées et compilées par le projet. En cas d'utilisation d'une de ces fonctions dans un programme, elle sera linké automatiquement si la signature de l'appel correspond. Il est possible d'ajouter autant de librairies que voulu : il suffit d'ajouter dans le dossier include_cmmp deux fichier : l'assembleur de la fonction nommé <nom_de_fonction>.s et un fichier d'en-tête nommé <nom_de_fonction>.info qui comprend les informations suivantes :

    - <nombre_de_paramètres> < > [<type_paramètre_i> pour i allant de 0 à <nombre_de_paramètre> - 1] < > <type_retour>

    Des exemples sont disponibles.
- L'espace mémoire n'est pas optimisé en fonction des types utilisés.
## Pour LINUX

Pour une utilisation complète :

- Créer un dossier situé "/lib/antlr" et y placer le jar "antlr-4.X.X-complete.jar" et le dossier antlr_runtime de la bibliothèque de runtime C++. Cela servira à compiler la grammaire vers la cible C++
- Conserver les paramètres par défaut de l'extension VSCODE Antlr (internal & Java). Cela servira à tester rapidement avec grun la grammaire
- Ajouter un alias dans "~/.bashrc" pour grun en remplaçant les X par votre version du jar :

    alias grun="java -cp '.:/lib/antlr/antlr-4.X.X-complete.jar:$CLASSPATH' org.antlr.v4.gui.TestRig"

- Modifier et enregistrer la grammaire (.g4), le dossier .antlr contient maintenant du code java à jour.
- Pour tester avec grun la grammaire, dans .antlr exécuter .grun qui compile le code java.
- Dans .antlr lancer la commande

    grun cmmp programme [-tree / -gui / -tokens] <nom_de_fichier>


Pour une utilisation rapide sans grun :

- Modifier les paramètres de l'extension VSCODE Antlr et choisir comme langage destination "Cpp", mode de génération "external" et la génération des visiteurs à "true".
- Modifier la grammaire et l'enregistrer produits les fichiers .h et .cpp nécessaires à la compilation.

Dans tous les cas, l'extension Antlr permet la visualisation de la grammaire à l'aide de graphes. Presser Ctrl+Maj+P pour l'invite de commande, et taper au choix :

- show atn, ??
- show call, pour le graphe d'appel de règle
- show railroad, pour le(s) graphe(s) de représentation de règles

## Pour windows

Visual Studio 2017

bugs courants :

- Utiliser les librairies de Multithreading de release et non de debug (/MD au lieu de /MDd)
