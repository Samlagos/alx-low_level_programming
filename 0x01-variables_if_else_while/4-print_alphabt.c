#include <stdio.h>
/**
 * main - Print all the letters except q and e
 *
 * Return: Zero 0 (Success)
 */

int main()
{
	char c;

	c = 'a';
	while
	(c <= 'z')
{
	if (c != 'e' && c != 'q')
{
	putchar(c);
}
	c++;
}
	putchar('\n');
return (0);
}
