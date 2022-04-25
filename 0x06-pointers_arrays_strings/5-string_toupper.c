#include "main.h"
#include <stdio.h>

/**
 * string_toupper - converts string to the upper case
 * @str: the string
 * Return: String
 */
char *string_toupper(char *)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
if (str[i] >= 97 && str[i] <= 122)
{
str[i] = str[i] - 32;
}
}

return (str);
}
