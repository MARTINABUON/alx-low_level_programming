#include <stdio.h>
/**
 *main - entry function
 *Description: Prints numbers from 0 to 10
 *Return: 0(Always success)
 */

int main(void)
{
	int m;

	for (m = 0; m < 10; ++m)
	{
		printf("%d", m);
	}
	putchar('\n');

	return (0);
}
