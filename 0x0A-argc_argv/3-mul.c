#include <stdio.h>
#include <stdlib.h>

/**
 * main - mainn function where argments are passed
 * @argc: integer input
 * @argv: integer input
 * Return: 0 when arguemnts are passes, and error when not passed
 **/

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}
