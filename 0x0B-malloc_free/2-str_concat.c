#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: string 1 pointer
 * @s2: string 2 pointer
 * Return: NULL when fails and pointer when succesful
 *
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int a = 0, b = 0, l1 = 0, l2 = 0;

	while (s1 && s1[l1])
		l1++;
	while (s2 && s2[l2])
		l2++;

	s3 = malloc(sizeof(char) * (l1 + l2 + 1));
	if (s3 == NULL)
		return (NULL);

	a = 0;
	b = 0;

	if (s1)
	{
		while (a < l1)
		{
			s3[a] = s1[a];
			a++;
		}
	}

	if (s2)
	{
		while (a < (l1 + l2))
		{
			s3[a] = s2[b];
			a++;
			b++;
		}
	}
	s3[b] = '\0';

	return (s3);
}
