#include <stdio.h>

/**
 * swap_int - swap to integer a and b
 *@a: first integer
 *@b: second integer
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
int temp = *a;
	*a = *b;
	*b = temp;
}
