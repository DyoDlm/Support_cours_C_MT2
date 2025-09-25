#include <stdio.h>

char	*str = "hello";

static int	getlen(char *s)
{
	int	i = 0;

	while (s && *s)
	{
		s++;
		i++;
	}
	return (i);
}

static void	hello()
{
	printf("%s\n", str);	//	imprime hello
}

static int	hello_int()
{
	return (printf("%s\n", str));	//	retourne le nombre de characteres imprimes
}

static char	hello_char(int position)
{
	if (position >= getlen(str) || position < 0)
		return ('\0');
	return (str[position]);
}

static char	*hello_str()
{
	return (str);
}

int	main()
{
	hello();
	printf("%d\n", hello_int());
	printf("%c\n", hello_char(1));
	printf("%s\n", hello_str());
	return 1;
}
