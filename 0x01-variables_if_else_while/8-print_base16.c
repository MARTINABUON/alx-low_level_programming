#include <stdio.h>
/**
 * main - entry function
 * Return: 0(Success)
 */
int main(void)
{
	int h;
	char c = 'a';

	for (h = 0; h <= 9; h++)
	{
		putchar(h % 10 + '0');
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
