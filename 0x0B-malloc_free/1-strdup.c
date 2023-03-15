#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 *
 * Return: pointer of an array of chars
 */
char *_strdup(char *str)
{
	char *st;
	unsigned int k, l;

	if (str == NULL)
		return (NULL);

	for (k = 0; str[k] != '\0'; k++)
		;

	st = (char *)malloc(sizeof(char) * (k + 1));

	if (st == NULL)
		return (NULL);

	for (l = 0; l <= k; l++)
		st[l] = str[l];

	return (st);
}
