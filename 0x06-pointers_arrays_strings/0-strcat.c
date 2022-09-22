#include "main.h"

/**
 * _strcat - concatenates string
 * @dest: destination string
 * @src: source string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	char s1[30] = "dest";
	char s2[4] = "src";

	strcat(s1, s2);
	printf("%s\n", s1);
}
