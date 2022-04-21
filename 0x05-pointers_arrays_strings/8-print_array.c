#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: array of integers
 * @n: number of items to print
 * Return: Void
 */

void print_array(int *a, int n)
{
short c = 0;

while (n-- > 0)
{
printf("%d", a[c++]);
if (n != 0)
printf(", ");
}

printf("\n");
}
