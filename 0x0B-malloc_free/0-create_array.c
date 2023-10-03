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
	unsigned int h;

	arr = malloc(sizeof(char) * size);
	for (h = 0; h < size; h++)
	{
	if (size == 0)
	{
		return (NULL);

	}
	if (arr == NULL)
	{
		return (0);
	}
	{
	*(arr + h) = c;
	h++;
	}
	}
	*(arr + h) = '\0';
	return (arr);
}
