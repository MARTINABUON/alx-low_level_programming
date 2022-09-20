#include "main.h"

/**
 * swap_int - swaps the inter
 * @a: first int pointer
 *@b: second integer pointer
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
