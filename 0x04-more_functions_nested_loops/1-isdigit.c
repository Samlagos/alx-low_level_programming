#include "main.h"

/**
 *_isdigit - check if a number is from 0 - 9
 * @c: the number to be checked
 * Return: 1 for number in base 10 and 0 for anything else
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
