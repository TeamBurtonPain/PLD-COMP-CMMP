# Projet Compilation langage C

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

## Pour LINUX

Pour une utilisation complète :

- Créer un dossier situé "/lib/antlr" et y placer le jar "antlr-4.X.X-complete.jar" et le dossier antlr_runtime de la bibliothèque de runtime C++. Cela servira à compiler la grammaire vers la cible C++
- Conserver les paramètres par défaut de l'extension VSCODE Antlr (internal & Java). Cela servira à tester rapidement avec grun la grammaire
- Ajouter un alias dans "~/.bashrc" pour grun en remplaçant les X par votre version du jar :

    alias grun="java -cp '.:/lib/antlr/antlr-4.X.X-complete.jar:$CLASSPATH' org.antlr.v4.gui.TestRig"

- Modifier et enregistrer la grammaire (.g4), le dossier .antlr contient maintenant du code java à jour.
- Pour tester avec grun la grammaire, dans .antlr exécuter .grun qui compile le code java.
- Dans .antlr lancer la commande

    grun cmmp programme [-tree] <nom_de_fichier>

- Un make clean dans le dossier principal supprime les fichiers .class et .o
- Pour générer les fichiers .h et .cpp, exécuter la tâche "compile_grammar"

Pour une utilisation rapide sans grun :

- Modifier les paramètres de l'extension VSCODE Antlr et choisir comme langage destination "Cpp", mode de génération "external" et la génération des visiteurs à "true".
- Modifier la grammaire et l'enregistrer produits les fichiers .h et .cpp nécessaires à la compilation.

Dans tous les cas, l'extension Antlr permet la visualisation de la grammaire à l'aide de graphes. Presser Ctrl+Maj+P pour l'invite de commande, et taper au choix :

- show atn, ??
- show call, pour le graphe d'appel de règle
- show railroad, pour le(s) graphe(s) de représentation de règles

## Pour windows (incoming)