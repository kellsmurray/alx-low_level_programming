#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strspn - Function that gets length of a prefix string.
 * @s: Pointer to the null-terminated byte string to be analyzed.
 * @accept: Pointer to the null-terminated byte string that contains characters.
 * Return: Number of bytes in theinitial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int length, j;


for (length = 0; *(s + length) != '\0'; length++)
{

for (j =  0; *(accept + j) != '\0'; j++)
{


if (*(s + length) == *(accept + j))
{
break;
}
}

if (! *(accept + j))
break;
}

return (length);
}
