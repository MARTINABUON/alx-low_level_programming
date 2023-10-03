#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function returns a pointer to 
 * a new string which is a duplicate of the string str
 * @str: string pointer
 * Return: Null if str is NULL and a pointer if succesful
 */
char *_strdup(char *str)
{
	char *ptA;
	unsigned int m = 0;
	unsigned int ln = 0;

	if (str == NULL)
		return (NULL);

	while (str[ln])
		ln++;

	ptA = malloc(sizeof(char) * (ln + 1));

	if (ptA == NULL)
		return (NULL);

	while ((ptA[m] = str[m]) != '\0')
		m++;

	return (ptA);
}
