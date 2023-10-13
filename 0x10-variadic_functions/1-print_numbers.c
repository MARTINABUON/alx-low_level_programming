#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints the numbers
 * @separator: string
 * @n: number of args
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list lst;

	va_start(lst, n);

	for (a = 0; a < n; a++)
	{
		if (!separator)
			printf("%d", va_arg(lst, int));
		else if (separator && a == 0)
			printf("%d", va_arg(lst, int));
		else
			printf("%s%d", separator, va_arg(lst, int));
	}

	va_end(lst);

	printf("\n");
}
