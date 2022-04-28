#include "main.h"

int helper_root_checker(int n, int a);

/**
 * _sqrt_recursion - Function that returns the natural square root of a number.
 * @n: number to check root 
 * Return: 0
 */

int _sqrt_recursion(int n)
{
if (n == 0)
{
return (0);
}
else if (n == 1)
{
return (1);
}
else if (n < 0)
{
return (-1);
}
else
{
return (helper_root_checker(n, 1));
}
}

/**
 * helper_root_checker - helper function to check if root exists
 * @n: number
 * @a: incrementor
 * Return: -1.
 */

int helper_root_checker(int n, int a)
{
if (n == (a * a))
{
return (a);
}
else if (n > (a * a))
{
return (helper_root_checker(n, a + a));
}
else
{
return (-1);
}
}
