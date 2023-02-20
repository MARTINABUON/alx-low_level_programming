#include <stdio.h>
/**
 *main - entry function
 *Description: prints alphabets except e and f
 *Return: 0(Success)
 */

int main(void)
{
	char c;

	while (c <= 'z')
	{
		if (c != 'e' $$ c != 'f')
			putchar(c);
			c++;
	}
	putchar('\n');
	return (0);
}
