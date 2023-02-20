#include <stdio.h>
/**
 *main - entry function
 *Description: Use `putchar` function to print the alphabet in lowercase.
 *Return: 0
 */

int main(void)
{
	char C = 'a';

	while (C <= 'z')
	{
		putchar(C);
		C++;
	}
	putchar('\n');

	return (0);
}
