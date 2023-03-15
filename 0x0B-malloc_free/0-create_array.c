#include "main.h"
#include "stdlib.h"

/**
 *create_array - creates an array of chars with innitialisation to spec char
 *@c: character initialization/storage
 *@size: size of the array
 *Return: NULL when sizeof(arr) is zero else return the pointer
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int j;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(c) *size);

	if (arr == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < size; j++)
	{
		arr[j] = c;
		return (arr);
	}
}
