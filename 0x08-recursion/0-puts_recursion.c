#include "main.h"
#include <stdio.h>

/**
 *_puts_recursion - A functions that prints a string
 *@s: The string input
 *return: Always 0
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
