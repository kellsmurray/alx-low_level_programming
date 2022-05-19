#include "variadic_functions.h"

/**
 *sum_them_all - sums all its parameters
 *@n: first parameter
 *
 *Return: 0 if n is null
 * or sum of parameters in other case
 */

int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int sum = 0;
va_list list;

va_start(list, n);

if (n == 0)
return (0);

for (i = 0; i < n; i++)
sum += va_arg(list, int);

va_end(list);

return (sum);
}
