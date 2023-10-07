#include "main.h"
#include <stdlib.h>
/**
 * array_range - A function that creates arrays of integers
 * @min: min array range
 * @max: maximum array range
 * Return: NULL when the malloc fails, NULL when min>max;
 * pointer ptB when succesful
 */
int *array_range(int min, int max)
{
	int *ptB;
	int size, a;

	size = max - min + 1;

	ptB = malloc(sizeof(int) * size);

	if (min > max)
	{
		return (NULL);
	}
	if (ptB == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < size; a++)
	{
		ptB[a] = min++;
	}
	return (ptB);
}
