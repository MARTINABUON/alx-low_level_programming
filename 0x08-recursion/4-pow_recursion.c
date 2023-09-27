#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - a function that returns the value of x raised
 * to the power of y
 * Return: -1 if y<0, 1 if y===0, x power y if y >0
 * @x: integer input
 * @y: integer input
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (_pow_recursion(x, y));
	}
}
