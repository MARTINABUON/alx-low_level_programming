#include <stdio.h>
/**
 *main - entry function
 *Return: 0
 */

int main(void)
{
	char C = 'a';

	while(C <= 'z')
	{
		putchar(C);
		C++;
	}
	putchar('\n');

	return (0);
