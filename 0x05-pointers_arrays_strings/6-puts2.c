#include "main.h"

/**
 * puts2 - print alternating chars of string
 * @str: string
 * Return: void
 */

void puts2(char *str)
{

int i = 0;

for (str[i] = 0; str[i] != '\0'; i++)
{
if (i % 2 == 0)
_putchar(str[i]);
}
_putchar('\n');
}
