#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncat - Function that concantenates two strings.
 * @dest: Pointer to the null-terminated byte string to append to.
 * @src: Pointer to the character array to copy from.
 * @n: Maximum number of characters to copy.
 *
 * Return: Pointer to dest.
 */

char *_strncat(char *dest, char *src, int n)
{
return (strncat(dest, src, n));
}
