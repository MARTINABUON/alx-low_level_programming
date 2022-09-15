#include "main.h"

/**
 * times_table - a function that prints the 9 times table, starting with 0
 * lum = table column, rone = row, d = digits of the current result
 * Return: times table
 * add extra space past single digit
 *
 */
void times_table(void)
{
	int lum, rone, d;

	for (rone = 0; rone <= 9; rone++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (lum = 1; lum <= 9; lum++)
		{
			d = (rone * lum);
			if ((d / 10) > 0)
			{
				_putchar((d / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((d % 10) + '0');

			if (lum < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

