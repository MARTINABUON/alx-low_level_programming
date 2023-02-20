#include <stdio.h>

int main(void)
{
	int y;

    	for (y = 0; y < 10; y++)
	{
		putchar(y % 10 +'0');
		if (y != 9)
				{
					putchar(',');
					putchar(' ');
				}
    	}
	putchar('$');

    	return (0);
}
