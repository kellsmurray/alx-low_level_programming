#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * reverse_array - Function that reverses an array.
 * @a: Pointer to the array to reverse.
 * @n: Size of elements in the array.
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
int i, tmp;

i = tmp = 0;

n -= 1;

while (i <= n)
{
tmp = a[n];
a[n--] = a[i];
a[i++] = tmp;
}
}
