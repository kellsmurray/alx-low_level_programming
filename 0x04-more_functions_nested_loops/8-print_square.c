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
int a;
int b;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (a = 0; a < size; a++)
{
for (b = 0; b < size; b++)
{
_putchar(35);
}
_putchar('\n');
}
}
}
