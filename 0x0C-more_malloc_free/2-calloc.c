#include <stdlib.h>
#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}
#include <stdlib.h>
/**
 * _calloc - A function that allocates memory for an array, using malloc
 * Return: return NULL if the maloc fails or size = 0, returns
 * pointer ptr if succesful
 * @size: the size of the array
 * @nmemb: the bytes for the array
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptA;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptA = malloc(size * nmemb);

	if (ptA == NULL)
		return (NULL);

	_memset(ptA, 0, nmemb * size);

	return (ptA);
}
