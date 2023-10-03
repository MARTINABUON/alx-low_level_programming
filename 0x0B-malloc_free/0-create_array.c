#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates array
 * @size: array size
 * @c: character input
 * Return: Returns NULL if size = 0,rturns the pointer
 */
char *create_array(unsigned int size, char c)
{
{
	char *arr;
	unsigned int j;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (0);

	for (j = 0; j < size; j++)
	{
		*(arr + j) = c;
	}

	*(arr + j) = '\0';

	return (arr);
}
