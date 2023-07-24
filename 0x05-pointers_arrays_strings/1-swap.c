#include "main.h"
/**
 * swap_int - swaps the integer values
 * @a: swapping integer
 * @b: another swapping integer
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
