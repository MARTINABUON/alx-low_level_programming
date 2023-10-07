#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - checks for the memory allocated
 * @b: an integer value innnitialized to the pointer
 * Return: return value
 */
void *malloc_checked(unsigned int b)
{
	int *ptA;

	ptA[0] = b;
	ptA = malloc(sizeof(int));

	if (ptA == NULL)
	{
	exit (98);
	}
	else
	{
		return (ptA);
		*(ptA++);
	}
}
