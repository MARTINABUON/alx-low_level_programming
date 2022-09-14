#include <stdio.h>

/**
*print_alphabet - a function that prints alphabet in lowercase
*
* Return: Always 0 (Success)
*
*/
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
}
