int ft_strcmp(char *s1, char *s2)
{
	while (1)
	{
		if (*s1 - *s2)
			return (*s1 - *s2);
		if (!(*s1 && *s2))
			break;
		s1++;
		s2++;
	}
	return (0);
}