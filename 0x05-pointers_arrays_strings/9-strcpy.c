#include "main.h"

/**
 * _strcpy - copies str from src to dest
 *@src: source string to copy
 *@dest: buffer to copy the string to
 *
 * Return: A pointer to the destination of the string @dest.
 *
 */

char *_strcpy(char *dest, char *src)
{
	int inc = 0;

	while (src[inc])
	{
		dest[inc] = src[inc];
		inc++;

	}

	return (dest);
}
