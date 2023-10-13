#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - a unction that sums all the args
 * Return: sum when n>0 else 0
 * @n: number of all the args
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int a;
	int sum = 0;
	va_list lst;

	va_start(lst, n);

	for (a = 0; a < n; a++)
	{
		sum += va_arg(lst, int);
	}
	va_end(lst);
	return (sum);
}
