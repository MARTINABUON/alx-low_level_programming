#include <stdio.h>

/**
 * main - main function, argc and argv is passed through the main
 * @argc: count the number of arguments
 * @argv: string of arguments in the command line
 * Return: Always 0
 **/

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
