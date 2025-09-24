size_t	ft_strlen(char *s)
{
	int	i = 0;
	
	while (s && s[i])
		i++;
	return i;
}
