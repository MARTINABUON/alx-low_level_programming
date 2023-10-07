#include "main.h"
#include <stdlib.h>
/**
 * _calloc - A function that allocates memory for an array, using malloc
 * Return: return NULL if the maloc fails or size = 0, returns
 * pointer ptr if succesful
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;

	ptr =  malloc(sizeof(int) * size);

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);
	if (malloc == NULL)
		return (NULL);
	for (nmemb = 0; nmemb < size; nmemb++)
		ptr[nmemb] = nmemb++;

		return (ptr);
}
