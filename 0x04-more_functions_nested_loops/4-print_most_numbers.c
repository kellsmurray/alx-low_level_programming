#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - Print numbers between 0 to 9 excluding 2 and 4
 *
 * Return: Void
 */

void print_most_numbers(void)
{

for (i = 0; i <= 9; i++)
{
while (i != 2 && i != 4)
{
_putchar(i + '0');
}
}
_putchar('\n');
}
