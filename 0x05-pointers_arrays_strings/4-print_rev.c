#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: - string
 * Return: void
 */

void print_rev(char *s)
{
	int len = 0, index;
	len = _strlen(s);

	for (index = len - 1; index >= 0; index--)
		putchar(s[index]);

	putchar('\n');
}
int _strlen(char *s)
{
int count, inc;
inc = 0;
for (count = 0; s[count] != '\0'; count++)
inc++;

return (inc);
}
