#include <stdio.h>

/**
 * main- main function
 * @argc: counts arguments
 * @argv: prints arguments
 * Return: 0
 **/

int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)
	{
		printf("%s\n", argv[j]);
	}
	return (0);
}
