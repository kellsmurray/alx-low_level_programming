#include <stdlib.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars.
 *
 * @size: argument for size of the array
 * @c: argument for char
 *
 * Return: 0.
 */

char *create_array(unsigned int size, char c)
{
char *buffer = malloc(sizeof(c) * size);
unsigned int i;

if (size == 0 || buffer == NULL)
{
return (NULL);
}

for (i = 0; i < size; i++)
{
buffer[i] = c;
}

return (buffer);
}
