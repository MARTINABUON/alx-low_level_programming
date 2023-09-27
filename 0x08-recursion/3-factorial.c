#include "main.h"
#include <stdio.h>

/**
 * factorial - A function that give the functorial of a number n
 * Return: -1 if n<0, 0 if n=0 , else return n*(n-1)!*
 * @n: integer input
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * (n - 1)!);
	}
}
