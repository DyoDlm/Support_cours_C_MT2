#include <stdio.h>	//	pour printf (entre autres)
#include <unistd.h>	//	pour write (entre autres aussi)

/*	SECTION COMMENTAIRES

	*   C'est comme les imports en python

	//	--	Conseils	--	//

	* 1) Placer les fonctions par ordre de dependance :
	*	c'est a dire 
	*		==> 1) f1 / pas de dependance
	*		    2) f2 / depend de f1
	*		    3) f3 / depend de f3
	*		    4) main / depend de f1, f2 et f3
	
	* 2) Separer vos fonctions par fichier (max 5 a 6 fonctions par fichier
	* 	--> lisibilite 

	* 3) Commenter votre code
	
	* 4) testez votre code avec des main
	* 	--> voir execmples
*/

#define BONJOUR 1
#define AUREVOIR 0

//	ce sont des macros (inchangeables le long du programme)

#define FOO "bla bla bla bla"
//	autre exemple
//	ou encore
#define IF if
#define ELSE else


//	dire bonjour
int	fonction1(void)
{
	printf("Bonjour\n");
	// pour \n regarder table ascii
	return 1;
}

//	dire aurevoir
int	fonction2(void)
{
	printf("Aurevoir\n");
	return 0;
}

//	appeler fonction 1 qui a une valeur de retour definie en <int>
int	fonction3(char *qqun)
{
	int	bonjour_ou_aurevoir;
	char	*msg = "WAAAAAAW\n";

	printf("%s dit : ", qqun);
	bonjour_ou_aurevoir = fonction1();
	
	if (bonjour_ou_aurevoir == BONJOUR)
		printf("Quelqu'un d'autre dit : %s ! %s a dit bonjour\n", msg, qqun);
	else
		printf("Quelqu'un d'autre dit : %s ! %s a dit aurevoir\n", msg, qqun);
	return 0;
}

//	appeler fonction 2 qui a une valeur de retiur definie en <int>
int	fonction4(char *qqun)
{
	int     bonjour_ou_aurevoir;
        char    *msg = "WAAAAAAW\n";

        printf("%s dit : ", qqun);
        bonjour_ou_aurevoir = fonction2();

        if (bonjour_ou_aurevoir == BONJOUR)
                printf("Quelqu'un d'autre dit : %s ! %s a dit bonjour\n", msg, qqun);
        else
                printf("Quelqu'un d'autre dit : %s ! %s a dit aurevoir\n", msg, qqun);
	return 1;
}

//	Une fonction qui n'a pas de retour : <void>
void	foo(void)
{
	printf("foo\n");
}


/*
 * main est le point d'entree d'un programme
 * Par defaut elle est prototypee : int	main()
 * Elle peut prendre 3 arguments de base
 * argc, argv et env
 * on peut les appeler fii, faa, foo si on veut
 * c'est egal...
*/	
int	main(int argc, char **argv, char **env)
{
	int	is_it_zero;

	printf("ARGC is : %d\n", argc);

	printf("ARGV ARE : \n");
	for (int i = 0; i < argc; i++)
		printf("ARGV N*%d : %s\n", i, argv[i]);

	(void)env;	// on ignore env, car pas utile au debut

	printf("\nJ'appelle la fonction 1\n");
	(void)fonction1();

	printf("\nJ'appelle la fonction 2\n");
	(void)fonction2();
	
	printf("\nJ'appelle la fonction 3\n");
	is_it_zero = fonction3("ZEBULON LE BOURDON");

	!is_it_zero ? printf("It is a zero") : printf("it was : %d\n", is_it_zero);

	printf("\nJ'appelle la fonction 4\n");
	is_it_zero = fonction4("MIRABELLE LA COCCINELLE");

	!is_it_zero ? printf("It is a zero") : printf("it was %d\n", is_it_zero);
	
	return 0;
}
