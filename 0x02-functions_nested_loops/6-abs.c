#include "main.h"

/**
 * _abs - check the code.
 *@c: the value to be studied
 * Return: Ablsolute value or zero
 */

int _abs(int c)
{
if (c < 0)
{
int abs_val;
abs_val = c * -1;
return (abs_val);
}
return (c);
}
