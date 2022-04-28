#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number.
 * @n: - number to calculate factorial
 * Return: an int of the factorial
 */

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n > 0)
{
return (n * factorial(n - 1));
}
else
{
return (1);
}
}
