#include <stdio.h>

/**
 * _strlen - return the lenght of a string
 * @str: the string to get the length from
 * Return: the lenght of @str
 */

int _strlen(const char *str)
{
size_t length = 0;
while (*str++)
	length++;
return (length);
}
