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
	char *arr;
	unsigned int i;


	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
	{
		return (0);
	}
	for (i = 0; i < size; i++)
	{
		*(arr + i) = c;
		i++;
	}
	return (arr);
}
