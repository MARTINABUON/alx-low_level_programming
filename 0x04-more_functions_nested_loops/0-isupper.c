#include <stdio.h>
/**
 * _isupper - checks if an aphabet is uppercase
 * @c:  uppercase alphabet
 * Return: return 1 for upper and 0 for lower
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
