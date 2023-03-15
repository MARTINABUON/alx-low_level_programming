#include <stdio.h>

/**
 *create_array - creates an array of chars with innitialisation to spec char
 *@c: character initialization
 *@size: size of the memory
 *Return: NULL when sizeof(arr) is zero else return the pointer
 */

char *create_array(unsigned int size, char c)
{
	char *arr;

	arr = "abuon";
	arr[0] = 'c';

	if (sizeof(*arr) == 0)
	{
		return (NULL);
	}
	else
	{
		return (arr);
	}
}
