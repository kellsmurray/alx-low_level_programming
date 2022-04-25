#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncpy - Function that copies a string.
 * @dest: Pointer to character array to copy to.
 * @src: Pointer to character array to copy from.
 * @n: Maximum number of characters to copy.
 *
 * Return: A copy of dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
return (strncpy(dest, src, n));
}
