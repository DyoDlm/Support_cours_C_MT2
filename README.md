# Bienvenue jeunes padawans !

Ce depot contient le support de cours et quelques outils pour vous accompagner dans vos exercices en C.  
Voici les etapes essentielles pour bien demarrer :

---

## Table des matieres

- [Avant de commencer](#avant-de-commencer)
- [Installation](#installation)
- [Conseils pedagogiques](#conseils-pedagogiques)
- [Execution d un programme en C](#execution-d-un-programme-en-c)
- [Utilisation des outils installes](#utilisation-des-outils-installes)
- [Commandes de base a connaitre dans le terminal](#commandes-de-base-a-connaitre-dans-le-terminal)
- [Et pour la suite](#et-pour-la-suite)

---

## Avant de commencer

Avant de cloner le depot et d installer les outils, assurez-vous d avoir :  

- **Git** installe sur votre machine (verifiez avec `git --version`).  
- **Un compilateur C** (exemple : `gcc` ou `clang`).  
- **Un terminal** (Linux, macOS ou PowerShell sous Windows).  

Ces pre-requis sont indispensables pour pouvoir compiler et tester vos programmes.  

---

## Installation

1. **Cloner le depot**

   Si vous utilisez HTTPS :  
   ```bash
   git clone https://github.com/DyoDlm/Support_cours_C_MT2.git
Si vous avez configure une cle SSH :

bash
Copy code
git clone git@github.com:DyoDlm/Support_cours_C_MT2.git
Lancer le script d installation
Une fois le dossier telecharge (ou transmis par un camarade), rendez le script executable :

Sous Linux :

bash
Copy code
chmod +x install.sh
./install.sh
Sous Windows (PowerShell) :

powershell
Copy code
./install.ps1
Ce script installera Git, configurera votre environnement, et ajoutera :

La mini-moulinette (outil pour verifier vos exercices).

La norminette (votre guide pour coder proprement).

Conseils pedagogiques
Testez vos programmes regulierement (utilisez un main).

Lisez la documentation (manuels GNU, man pages...). Cela prend plus de temps qu un LLM, mais vous retiendrez mieux.

Perseverez. La gestion des erreurs, c est 90 % du travail d un developpeur.

Trouvez vos propres reperes et methodes de travail.

Execution d un programme en C
Choisissez un compilateur : clang, gcc...

Assurez-vous d avoir une fonction d entree (int main()).

Compilez :

bash
Copy code
gcc main.c file1.c file2.c -o MonProgramme
Executez :

bash
Copy code
./MonProgramme
Si ca ne fonctionne pas... cherchez, testez, experimentez !

Utilisation des outils installes
Mini-moulinette
Dans le repertoire correspondant a un exercice (ex : C00, C01, ...) :

bash
Copy code
mini C00
Norminette
Dans le dossier de vos fichiers C :

bash
Copy code
norminette mon_fichier.c
Commandes de base a connaitre dans le terminal
ls : lister les fichiers/dossiers.

cd : changer de dossier (cd Documents).

cat : afficher le contenu d un fichier.

nano : editer un fichier texte.

Et pour la suite
Experimentez, reflechissez, osez tricher intelligemment ;).

Vous pouvez proposer des ameliorations en ouvrant une pull request.

De nouvelles ressources et conseils seront ajoutes au fur et a mesure.


