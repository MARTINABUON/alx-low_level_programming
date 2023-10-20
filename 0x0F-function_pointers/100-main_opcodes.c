#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int bts, a;
	char *ar;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bts = atoi(argv[1]);

	if (bts < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ar = (char *)main;

	for (a = 0; a < bts; a++)
	{
		if (a == bts - 1)
		{
			printf("%02hhx\n", ar[a]);
			break;
		}
		printf("%02hhx ", ar[a]);
	}
	return (0);
}
