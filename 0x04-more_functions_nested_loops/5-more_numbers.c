#include "main.h"
#include <stdio.h>

/**
 * more_numbers - Print numbers between 0 to 14
 *
 * Return: void
 */

void more_numbers(void)
{

int j = 0;
int c = 0;

while (c < 10)
{
while (j <= 14)
{
_putchar(j + '0');                                                                                                                
j++;
}
_putchar('\n');
c++;
}
}
_putchar('\n');
}
