#include "main.h"
/**
 * reverse_array - reverses rray element
 * Description: The function reverses a string of integers
 * @n: number of array elements
 * @j: the starting array element
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int j;
	int tmp;

	while (j < n)
	{
		int tmp = array[j];
		array[j] = array[n];
		array[n] = tmp;
		j++;
		n++;
	}
	_putchar('\n');
}
