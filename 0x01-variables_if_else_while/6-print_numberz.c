#include <stdio.h>
/**
 * main - entry function
 *Return: 0(Success)
 */

int main(void)
{
	int j;

	for(j = 0; j < 11; ++j)
	{
		putchar(j + '0');
	}
	putchar('\n');

	return (0);
}
