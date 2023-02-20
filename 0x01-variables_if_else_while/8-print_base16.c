#include <stdio.h>
/**
 * main - entry function
 * Return: 0(Success)
 */
int main(void)
{
    int h;

    for (h = 0; h <= 9; h++)
    {
        putchar(h);
    }
    char c = 'a';

    while (c <= 'f')
    {
        putchar(c);
        c++;
    }
    putchar('\n');

    return (0);
}
