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
	unsigned int j = 0;

	if (size == 0)
		return (NULL);

	arr = (char *) malloc(sizeof(char) * size);

	if (arr == NULL)
		return (0);

	while (j < size)
	{
		*(arr + j) = c;
		j++;
	}

	*(arr + j) = '\0';

	return (arr);
}
