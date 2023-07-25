#include "main.h"
#include <stdio.h>
/**
 * print_array - prints elements in an array
 * @a: array name
 * @n: number of elements in an array
 * return:a and n
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
	}
		if (i != n - 1)
	{
		printf(", ");
	}
	printf("\n");
}
