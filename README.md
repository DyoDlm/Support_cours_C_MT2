Salutation jeune padawan !

Voici quelques points important concernant l'installation :
    
    1) Si vous etes sur github, entrer dans votre terminal :

        git clone https://github.com/DyoDlm/Support_cours_C_MT2.git

    ou si vous avez configure votre clef ssh :
 
        git clone git@github.com:DyoDlm/Support_cours_C_MT2.git
    

    2) Une fois la premiere etape realisee ou si un tiers vous a fournit le dossier,
    rendez le script install.sh (si sur linux) ou install.ps1 (si sur Windows) executable :
        
        chmod 666 [install.(sh ou ps1)]

    Ce script va vous installer github et vous assister a la configuration de ce dernier.

    Cela vous permettra d'installer la mini-moulinette (programme pour verifier vos exercices)
    et la norminette (pour coder avec un max de style)***

    
    3) Je n'ai pas trouve de troisieme point important...


    *** CONCERNANT LE STYLE ***

Si vous ecriver du code sexy, plus de personnes vont vouloir vous aider...
Ne pas hesiter a consulter la rubrique "coding style" chez GNU
Voila.

    
    *** En termes pedagogiques, quelques conseils ***

A)  Faites vos tests (mains)

B)  Lisez le man GNU. Documenter vous bien ! Bien avant de demander a un LLM...
        --> on va moins vite, mais on apprend mieux

C)  Perseverer. Gerer les erreurs c'est 90% du temps qu'on passe a coder

D)  Trouver vos lignes directrices x0x0




    *** comment executer votre code ***

-   Choisissez clang ou gcc (ou d'autres anyway)

-   il doit y avoir un point d'entree dans un de vos fichiers (int  main())

-   effectuer : gcc main.c file1.c file2.c -o NomDuProgramme

-   executer : ./NomDuProgramme

-   Et si ca ne marche pas, trouvez la solution !


Pour ameliorer le repo, ne pas hesiter a faire des pull-requests

J'ajouterai conseils, sources et nouvelles methodes au fur et a mesure, mais l'essentiel est la !


Good luck
