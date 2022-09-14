#include <stdio.h>
/**
*print_alphabet_x10- prints alphabet 10 times
*Return: x10 a-z
*
*/
void print_alphabet_x10(void)
{
	int h , t;

	t = 0;
	while(t < 10)
	{
		for (h = 'a'; h <= 'z'; h++);
		{
			putchar(h);
		}
		t++;
		putchar('\n');
	}
}


