#include "main.h"
/**
 * reverse_array - reverses rray element
 * Description: The function reverses a string of integers
 * @a: array
 * @n: number of array elements
 * @i: the starting array element
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	i = 0;

	while (i < n)
	{
		int tmp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = tmp;
		i++;
		n--;
	}
	_putchar('\n');
}
