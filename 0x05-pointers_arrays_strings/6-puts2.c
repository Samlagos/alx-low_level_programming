#include "main.h"

/**
 * puts2 - print every other charater of the string
 *@str: the string to be treated
 * Return: Always void
 */

void puts2(char *str)
{
char rev = s[0];
int counter = 0;
int i;

while (s[counter] != '\0')
	counter++;
for (i = 0; i < counter; i++)
{
counter--;
rev = s[i];
s[i] = s[counter];
s[counter] = rev;
}
}
