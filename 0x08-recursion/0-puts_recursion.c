#include "main.h"

/**
 *_puts - Afunctions that prints a string 
 *@s: The string input
 *return: Always 0 
 */

void _puts_recursion(char *s)
{
	if(s[0] != '\0')
	{
		_putchar(s[0]);
		_putchar(s+1);
	}
	else
	{
		_putchar('\n');
	}
}
