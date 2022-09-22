#include "main.h"
/**
 * leet -encodes a string into 1337
 * @s: input string
 * Return: the pointer to dest
 */

char *leet(char *s)
{
	int count = 0, i;
	int low_letter[] = {97, 101, 111, 116, 108};
	int upp_letter[] = {65, 69, 79, 84, 76};
	int number[] = {52, 51, 48, 55, 49};

	while (*(s + count) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + count) == low_letter[i] || *(s + count) == upp_letter[i])
			{
				*(s + count) = number[i];
				break;
			}
		}
		count++;
	}

	return (s);
}
