#include "main.h"

/**
 * print_diagonal - Draws a diagonal line according to parameter
 *
 * @n: The number of times to print diagonal lines
 *
 * Return: void
 */

void print_square(int size)
{
int a, b;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (a = 0; a < n; a++)
{
for (b = 0; b < n; b++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
