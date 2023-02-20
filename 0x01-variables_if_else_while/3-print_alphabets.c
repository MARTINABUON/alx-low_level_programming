#include <stdio.h>
/**
 *main - entry
 *Return: 0(Always)
 */

int main(void)
{
	char C = 'a';

	while (C <= 'z')
	{
		putchar(C);
		C++;
	}
	char C = 'A';

	while (C <='Z')
	{
		putchar(C);
		C++;
	}
	putchar('\n');

	return (0);
}
