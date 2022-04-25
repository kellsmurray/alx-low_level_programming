#include "main.h"

/**
 * _strncat - Concantenate two strings using @ bytes
 *
 * @dest: Destination string; src string appended to it
 * @src: Source string; gets appended to destination string
 * @n: Number of bytes of src that should be concantenated with dest
 *
 * Return: Pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{

int i = 0;
int j = 0;

while (dest[i] != '\0')
{
i++;
}
    
while (src[j] != '\0' && n != j)
{
*(dest + 1) = src[j];
j++;
i++;
}

*(dest + 1) = '\0';

return (dest);
}
