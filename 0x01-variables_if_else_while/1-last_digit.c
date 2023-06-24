#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - The last digit
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	m = n % 10;
	if (m > 5)
	printf("last digit of %d is %d and is greater than 5\n", 98, m);
	if (m == 0)
	printf("last digit of %d is %d and is 0\n", -98, m);
	if (m < 6 && m != 0)
	printf("last digit of %d is %d and is less than 6 and not 0\n", 980, m);
	return (0);
}
