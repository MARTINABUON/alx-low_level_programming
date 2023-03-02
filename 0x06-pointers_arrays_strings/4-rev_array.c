#include "main.h"
/**
 * reverse_array - reverses rray element
 * Description: The function reverses a string of integers
 * @a: array
 * @n: number of array elements
 * @i: the starting array element
 * Return: Nothing
 */

void reverse_array(int array[], int n)
{
	int i;
	int tmp;

	while (i < n)
	{
		int tmp = array[i];
		array[i] = array[n - 1];
		array[n - 1] = tmp;
		i++;
		n--;
	}
	_putchar('\n');
}
