#include <stdio.h>
/**
 *main - entry function
 *Description: prints alphabets except e and q
 *Return: 0(Success)
 */

int main(void)
{
	char c;

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
			putchar(c);

		c++;
	}
	putchar('\n');

	return (0);
}
