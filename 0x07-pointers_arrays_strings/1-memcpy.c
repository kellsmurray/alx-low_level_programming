#include "main.h"
#include <stdio.h>

/**
 * _memcpy - Function that copies memory area.
 * @dest: Pointer to the object to copy to.
 * @src: Pointer to the object to copy from.
 * @n: Number of bytes to copy.
 *
 * Return: A pointer to dest or 0 on success.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{

unsigned int i;

for (i = 0; i < n; i++)
{
*(dest + i) = *(src + i);
}

return (dest);
}
