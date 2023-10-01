#include <stdio.h>
#include <stdlib.h>
/**
 * main - argc and argv arguments passed through it
 * @argc: counts the number of arguments
 * @argv: string of the arguments
 * Return: 0  always when successful
 **/
int main(int argc, char *argv[])
{
	int cents, mincents = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		if (cents >= 10)
			cents -= 10;
		if (cents >= 5)
			cents -= 5;
		if (cents >= 2)
			cents -= 2;
		if (cents >= 1)
			cents -= 1;
		mincents++;
	}
	printf("%d\n", mincents);
	return (0);
}

