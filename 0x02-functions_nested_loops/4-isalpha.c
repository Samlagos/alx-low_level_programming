#include "main.h"

/**
 * _isalpha - check the code.
 *@c: the character under investigation
 * Return: 1 for the alphabet charaters or 0 for anything else.
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
