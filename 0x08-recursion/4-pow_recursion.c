#include "main.h"

/**
 * _pow_recursion - a function that returns the value of x raised to the power of y
 * @x: number to power
 * @y: the power 
 * Return: an int value of the power
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y > 0)
{
return (x * _pow_recursion(x, y-1))
}
else
{
return(1)
}
}
