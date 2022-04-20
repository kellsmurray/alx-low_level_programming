#include "main.h"

/**
 * 2-strlen.c - main function checking string length
 *
 *char str checks the character
 *
 *len checks the length
 *
 */

int _strlen(char *s)
{
int len = 0;

while (s[len] != '\0')
{
len++;
}

return (len);
}
