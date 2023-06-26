#include "main.h"

/**
 * _puts - print string
 *@str: the string to print
 * Return: Always 0.
 */
void _puts(char *str)
{
for (; *str != '\0'; *str++)
	_putchar(*str);
_putchar('\n');
}
