#include <stdio.h>
/**
 * _abs - checks for absolute value and returns to main
 * @h: integer
 * Return: absolute value
 */

int _abs(int h)
{
	if (h >= 0)
	{
		return (h);
	}
	else
	{
		return (h * -1);
	}
}
