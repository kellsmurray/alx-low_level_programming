#include "main.h"

/**
 * _puts(char *str) - prints out a string
 *
 * str is a string array
 *
 * Returns void
 */

void _puts(char *str)
{
int i = 0;
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
