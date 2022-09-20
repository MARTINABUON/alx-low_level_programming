#include "main.h"

/**
 * puts2 - prints every other character of a string starting
 * with the first character, followed by a new line *@str: - string
 * return: void
 *
 */
void puts2(char *str)
{
	int a, b = 0;

	while (str[a] != '\0')
		a++;

	while (b < a)
	{
		putchar(str[b]);
		b = b + 2;
	}

	putchar('\n');
}
