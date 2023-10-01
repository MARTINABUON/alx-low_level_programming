#include <stdio.h>

/**
 * main - mainn function where argments are passed
 * @y: integer input
 * @x: integer input
 * @mult: y*x
 * Return: 0 when arguemnts are passes, and error when not passed
 **/

int main(int y, int x)
{
	int mult = y * x;
	{
	printf("%d\n",mult);
	}
	return (0);
}
int main(int y, int x)
{
	(void) y;
	(void) x;
	{
		printf("Error");
	}
	return (1);
}
