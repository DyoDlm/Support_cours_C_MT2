#include <stdio.h>	//	pour printf (entre autres)
#include <unistd.h>	//	pour write (entre autres aussi)

/*	SECTION COMMENTAIRES

	*   C'est comme les imports en python

	//	--	Conseils	--	//

	* 1) Ecrire les fonctions par ordre de dependance :
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

//	c'est des macros (inchangeables le long du programme)



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

void	fonction3(char *qqun)
{
	int	bonjour_ou_aurevoir;
	char	*msg = "WAAAAAAW\n";

	printf("%s dit : ", qqun);
	bonjour_ou_aurevoir = fonction1();
	
	if (bonjour_ou_aurevoir == BONJOUR)
		printf("Quelqu'un d'autre dit : %s ! %s a dit bonjour\n", msg);
	else
		printf("Quelqu'un d'autre dit : %s ! %s a dit aurevoir\n", msg); 
}

int	fonction4(char *qqun)
{
	int     bonjour_ou_aurevoir;
        char    *msg = "WAAAAAAW\n";

        printf("%s dit : ", qqun);
        bonjour_ou_aurevoir = fonction2();

        if (bonjour_ou_aurevoir == BONJOUR)
                printf("Quelqu'un d'autre dit : %s ! %s a dit bonjour\n", msg);
        else
                printf("Quelqu'un d'autre dit : %s ! %s a dit aurevoir\n", msg);
}

int	main(int ac, char **av, char **env)
{
	if (ac != 3)
	{
		//	msg
		return 1;
	}
	
	
	return 0;
}
