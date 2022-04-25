#include "main.h"

/**
 * char *_strcat - concatenates two strings
 * @src: first parameter to a pointer
 * @dest: second parameter to a pointer
 * Return: Returns an integer of two concatenated strings
 */
char *_strcat(char *dest, char *src)
{
int i = 0, j = 0;

while (dest[i] != '\0')
{
i++;
}

while (src[j] != '\0')
{
dest[i] = src[j];
j++;
i++;
}

dest[i] = '\0';

return (dest);
}
