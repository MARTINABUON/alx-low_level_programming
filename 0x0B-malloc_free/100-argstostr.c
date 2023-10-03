#include "main.h"
#include <stdlib.h>
/**
  *argstostr - concatenates all arguments
  *@ac: argument count.
  *@av: pointer to array
  *Return: NULL if ac == 0 or av == null, Pointer to new string.
  *NULL on fail.
  */
char *argstostr(int ac, char **av)
{
	int a, b, c, sz;
	char *ar;

	sz = 0;
	c = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	a = 0;
	while (a < ac)
	{
		b = 0;
		while (av[a][b])
		{
			sz++;
			b++;
		}
		sz++;
		a++;
	}
	ar = malloc((sizeof(char) * sz) + 1);
	if (ar == NULL)
		return (NULL);
	a = 0;
	while (a < ac)
	{
		b = 0;
		while (av[a][b])
		{
			ar[c] = av[a][b];
			b++;
			c++;
		}
		ar[c] = '\n';
		c++;
		a++;
	}
	ar[c] = '\0';
	return (ar);
}
