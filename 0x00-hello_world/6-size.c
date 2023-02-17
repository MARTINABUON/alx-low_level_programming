#include <std.h>
/**
 *main - entry
 *Return: 0(Success)
 */

int main(void)
{
	printf("Size of a float: %f byte(s)\n", sizeof(float));
	printf("Size of a character: %c byte(s)\n", sizeof(char));
	printf("Size of an interger: %i byte(s)\n", sizeof(int));
	printf("Size of a hexadecimal: %p byte(s)\n", sizeof(pointer));
	return (0);
}
