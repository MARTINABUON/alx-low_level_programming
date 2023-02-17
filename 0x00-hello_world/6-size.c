#include <stdio.h>
/**
 *main - entry
 *Return: 0(Success)
 */

int main(void)
{
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	printf("Size of a character: %d byte(s)\n", sizeof(char));
	printf("Size of an interger: %d byte(s)\n", sizeof(int));
	printf("Size of long interger: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long interger: %d byte(s)\n", sizeof(long long int));
	return (0);
}
