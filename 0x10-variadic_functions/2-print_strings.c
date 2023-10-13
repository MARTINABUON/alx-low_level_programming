#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: separator between strings
 * @n: number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	char *strptA;

	va_list lst;

	va_start(lst, n);

	for (a = 0; a < n; a++)
	{
		strptA = va_arg(lst, char *);
		if (!strptA)
			strptA = "(nil)";
		if (!separator)
			printf("%s", strptA);
		else if (separator && a == 0)
			printf("%s", strptA);
		else
			printf("%s%s", separator, strptA);
	}

	printf("\n");

	va_end(lst);
}
