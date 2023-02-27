#include "main.h"
/**
 * swap_int - swaps value of two integers
 * @a: first integer input
 * @b: second integer input
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
