#include <stdio.h>
/**
 * print_alphabet - prints lowercase alphabets x10
 * Return: nothing
 */

void print_alphabet_x10(void)
{
	char a;
	int b;

	for (b = 0; b <= 10; b++)
	{
		for (a = 'a'; a <= 'z'; a++)
			putchar(a);
		putchar('\n');
	}

}
