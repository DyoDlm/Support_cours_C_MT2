Bienvenue jeunes padawans !

Ce dépôt contient le support de cours et quelques outils pour vous accompagner dans vos exercices en C.
Voici les étapes essentielles pour bien démarrer :

Installation

Cloner le dépôt

Si vous utilisez HTTPS :

git clone https://github.com/DyoDlm/Support_cours_C_MT2.git


Si vous avez configuré une clé SSH :

git clone git@github.com:DyoDlm/Support_cours_C_MT2.git


Lancer le script d’installation
Une fois le dossier téléchargé (ou transmis par un camarade), rendez le script exécutable :

Sous Linux :

chmod +x install.sh
./install.sh


Sous Windows (PowerShell) :

./install.ps1


Ce script installera Git, configurera votre environnement, et ajoutera :

La mini-moulinette (outil pour vérifier vos exercices).

La norminette (votre guide pour coder proprement).

Conseils pédagogiques

Testez vos programmes régulièrement (utilisez un main).

Lisez la documentation (manuels GNU, man pages…). Cela prend plus de temps qu’un LLM, mais vous retiendrez mieux.

Persévérez. La gestion des erreurs, c’est 90 % du travail d’un développeur.

Trouvez vos propres repères et méthodes de travail.

Exécution d’un programme en C

Choisissez un compilateur : clang, gcc…

Assurez-vous d’avoir une fonction d’entrée (int main()).

Compilez :

gcc main.c file1.c file2.c -o MonProgramme


Exécutez :

./MonProgramme


Si ça ne fonctionne pas… cherchez, testez, expérimentez !

Utilisation des outils installés

Mini-moulinette
Dans le répertoire correspondant à un exercice (ex : C00, C01, …) :

mini C00


Norminette
Dans le dossier de vos fichiers C :

norminette mon_fichier.c

Commandes de base à connaître dans le terminal

ls : lister les fichiers/dossiers.

cd : changer de dossier (cd Documents).

cat : afficher le contenu d’un fichier.

nano : éditer un fichier texte.

Et pour la suite…

Expérimentez, réfléchissez, osez tricher intelligemment 😉.

Vous pouvez proposer des améliorations en ouvrant une pull request.

De nouvelles ressources et conseils seront ajoutés au fur et à mesure.

Bonne chance et amusez-vous en codant ! 🚀

Veux-tu que je le restructure aussi avec une table des matières cliquable (utile pour un README GitHub), ou tu préfères garder le style “manuel papier” simple et linéaire ?

You said:
Passer le contenu donne dans un fichier README.md pret a copier-coller
ChatGPT said:
# Bienvenue jeunes padawans !

Ce dépôt contient le support de cours et quelques outi
