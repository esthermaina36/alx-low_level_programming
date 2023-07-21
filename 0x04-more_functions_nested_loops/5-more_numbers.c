#include "main.h"
#include <stdio.h>
/**
 * more_numbers - prints more numbers 10 times from 0-14
 * Return: void
 */
void more_numbers(void)
{
	int _putchar(char c);
	int i, j;

	for (i = 1; i <= 10; i++)
	{
	for (j = 0; j <= 14; j++)
	{
	if (j >= 10)
		_putchar('i');
	    _putchar(j % 10 + '0');
	}
	putchar('\n');
	}
}

