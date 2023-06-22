#include "main.h"

/**
 * _isupper - Check if a letter is upper
 * @c: the letter to be checked
 * Return: 1 for upper case and 0 for anything else
 */

int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}
