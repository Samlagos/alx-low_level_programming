#include "main.h"

/**
 * _puts - print string
 * @str: the string to print
 * Return: Always 0.
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str++);
}
_putchar('\n');
}
