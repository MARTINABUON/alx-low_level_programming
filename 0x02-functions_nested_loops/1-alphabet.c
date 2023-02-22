#include <stdio.h>
/**
 * print_alphabet - prints alphabets in LC
 */

void print_alphabet(void)
{
	char A = 'a';

	while (A <= 'z')
	{
		putchar(A);
		A++;
	}
	putchar('\n');
}
