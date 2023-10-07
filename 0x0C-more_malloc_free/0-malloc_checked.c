#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - checks for the memory allocated
 * @b: an integer value innnitialized to the pointer
 * Return: return value
 */
void *malloc_checked(unsigned int b)
{
	void *ptA;

	ptA = malloc(b)

	if (ptA == NULL)
	{
	exit (98);
	}
	else
	{
		return (ptA);
	}
}
