#include <stdio.h>

/**
 * main - main function with arguments argc and argv passed thru'
 * @argc: counts the number of arguments passed
 * @argv: strings of arguments passed
 * Return: O(Always success)
 **/

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
