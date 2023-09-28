#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - returns the square root of natural numbers
 * @n: integer input
 * Return: square root if n>=1, else return -1
 */
 
int _sqrt_recursion(int n)
{
	if (n >= 1)
	{
		return (_sqrt_recursion(n));
	}
	else
	{
		return (-1);
	}
}

