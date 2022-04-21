#include "main.h"

/**
 * puts_half - print the second half of the string
 * @str: string
 * Return: void
 */

void puts_half(char *str)
{
int ttl, half, length = 0;

while (str[length] != '\0')
{
length++;
}

ttl = length++;
half = ttl / 2;
  
if (ttl % 2 == 0)
{
while (half != '\0')
{
_putchar(str[half]);
}
}
else
{
half = (n - 1) / 2;
while (half != '\0')
{
_putchar(str[half]);
}
}
}
