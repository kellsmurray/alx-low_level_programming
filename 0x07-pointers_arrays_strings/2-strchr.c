#include "main.h"
#include <stdio.h>

/**
 * _strchr - a function that locates a character in a string.
 * @s: Pointer to the null-terminated byte stirng to be analyzed
 * @c: Character to search for
 * Return: A pointer to first occurence of c.
 */

char *_strchr(char *s, char c)
{

unsigned int i;

for (i = 0; *(s + i) != '\0'; i++)
{

if (*(s + i) == c)
return (s + i);

}
if (*(s + i) == c)
return (s + i);

return ('\0');
}
