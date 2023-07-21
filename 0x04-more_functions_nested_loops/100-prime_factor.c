#include <stdio.h>
#include "main.h"
/**
 * main - prints the largest prime factor
 * * Return:0
 */
int main(void)
{
	unsigned long int i, n = 612852475143;

	for (i = 3; i < 784829; i = i + 2)
	{
		while ((n % i == 0) && (n != 1))
			n = n / i;
	}
	printf("%lu\n", n);
	return (0);
}
