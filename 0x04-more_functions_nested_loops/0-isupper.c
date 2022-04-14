#include "main.h"

/**
 * _isupper - checks for uppercase characters
 *
 * @c: Number to be checked
 *
 * Return: 1 (Success) or 0 (Faiure)
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
