Salutation jeune padawan !


#   Concerant l'installation    #

Voici quelques points important concernant l'installation :
    
    1) Si vous etes sur github, entrer dans votre terminal :

        git clone https://github.com/DyoDlm/Support_cours_C_MT2.git

    ou si vous avez configure votre clef ssh :
 
        git clone git@github.com:DyoDlm/Support_cours_C_MT2.git
    

    2) Une fois la premiere etape realisee ou si un tiers vous a fournit le dossier,
    rendez le script install.sh (si sur linux) ou install.ps1 (si sur Windows) executable :
        
        chmod 666 [install.(sh ou ps1)]

    puis :
        
        ./install.sh

    sous linux ou 

        ./install.ps1

    sur windows.

    Ce script va vous installer github et vous assister pour la configuration de ce dernier.

    Cela vous permettra d'installer la mini-moulinette (programme pour verifier vos exercices)
    et la norminette (pour coder avec un max de style)***

    
    3) Je n'ai pas trouve de troisieme point important...



#   CONCERNANT LE STYLE  #

Si vous ecriver du code sexy (et utile), + de personnes vont vouloir vous aider...

Ne pas hesiter a consulter la rubrique "coding style" chez GNU

Citation de Richar Stallam :
   Le style est style, ah, oui oui



#   En termes pedagogiques, quelques conseilsi  #

    A)  Faites vos tests (mains)

    B)  Lisez le man GNU. Documenter vous bien ! Bien avant de demander a un LLM...
        --> on va moins vite, mais on apprend mieux

    C)  Perseverer. Gerer les erreurs c'est 90% du temps qu'on passe a coder

    D)  Trouver vos lignes directrices x0x0



#   comment executer votre code     #

-   Choisir son compilateur (clang, gcc ou autre)

-   il doit y avoir un point d'entree dans un de vos fichiers (int  main())

-   effectuer : gcc main.c file1.c file2.c -o NomDuProgramme

-   executer : ./NomDuProgramme

-   Et si ca ne marche pas, trouvez la solution !



#   Comment utiliser les outils telecharges     #

-   Le correcteur automatique --> aller dans le repertoire Cxx et taper la commande :
        mini Cxx    (c'est mini C00 si dans C00 et mini C01 si dans C01, etc)

-   La norminette --> aller dans le repertoire ou se trouve votre fichier et :
        norminette mon_fichier

Pour plus d'informations, visitez les liens suivants :

mini-moulinette --> https://github.com/k11q/mini-moulinette

norminette      --> https://github.com/42school/norminette

#   Quelques commandes Utiles
Il est semblable que ca soit dur de tester si vous bossez pas sur un terminal...
Donc voila les commandes de bases pour survivre :

    -   ls (permet de lister les fichiers et dossiers dans le repertoire courant)
    -   cd (permet de changer de repertoire || ex : cd Documents --> on va dans documents)
    -   cat (affiche le contenu d'un fichier)
    -   nano (un editeur de texte pour bosser sur vos fichiers)


Pour le reste, Au nom d'Odin ! Non d'une pipe! Reflechissez !


--------------------------------------------------------------------------

Pour ameliorer le repo, ne pas hesiter a faire des pull-requests

J'ajouterai conseils, sources et nouvelles methodes au fur et a mesure, mais l'essentiel est la !


Good luck
