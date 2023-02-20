#include <stdio.h>
/**
*main - entry function
*Return: 0(Success)
*/

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

    putchar('\n');
    return (0);
}
