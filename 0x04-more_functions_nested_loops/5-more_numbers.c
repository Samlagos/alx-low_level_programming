#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14, 10 times
 * Return: return 10 times the number 0 to 14
 */

void more_numbers(void)
{
int x, y;

for (x = 1; x <= 10; x++)
{
for (y = 0; y <= 14; y++)
{
if (y >= 10)
_putchar('1');
_putchar(y % 10 + '0');
}
_putchar('\n');
}
}
