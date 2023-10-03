#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: string 1 pointer
 * @s2: string 2 pointer
 * Return: NULL when fails and pointer when succesful
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	int a = 0;
	int b = 0;

	if (s3 == NULL)
		return (NULL);

	while (s1[a] != '\0')
	{
		s1[a] = s2[b];
		a++;
		b++;
	}
	while (s2[a] != '\0')
	{
		s3[b] = s2[a];
		a++;
		b++;
	}
	s3[b] = '\0';
	s3 = malloc(sizeof(char) * b);
	return (s3);
}
