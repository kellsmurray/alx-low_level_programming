#include "main.h"

/**
 * puts_half - print the second half of the string
 * @str: string
 * Return: void
 */

void puts_half(char *str)
{
int n, half, i = 0, length = 0;

while (str[length] != '\0')
{
i++;
}

n = i++;
half = n / 2;
  
if (n % 2 == 0)
{
while (half != '\0')
{
_putchar(str[half]);
}
}
else
{
half = (n - 1) / 2;
_putchar(str[half]);
}
}
