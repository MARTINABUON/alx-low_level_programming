#include "main.h"
#include <stdio.h>

/**
 *_print_rev_recursion - A function that prints a string in reverse
 *@s: The string input
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
