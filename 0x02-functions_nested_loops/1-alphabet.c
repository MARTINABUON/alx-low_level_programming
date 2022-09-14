#include <stdio.h>

/**
*main - prints alphabet
*
* Return: Always 0 (Success)
*
*/
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a';alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
}
