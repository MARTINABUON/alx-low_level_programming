#include <stdio.h>
/**
 *main - entry function
 *Return: 0(Success)
 */

int main(void)
{
	char t = 'z';

	while (t >= 'a')
	{
		putchar(t);
		t--;
	}
	putchar('\n');

	return (0);
}
