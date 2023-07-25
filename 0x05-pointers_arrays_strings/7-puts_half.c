#include "main.h"
#include <stdio.h>
/**
 * ptr - function that divides
 */

void puts_half(char *str)
{
	int len = 0;
	char *ptr = str;

	while (*ptr != '\0')
	{
	len++;
	ptr++;
	}
	int start = len / 2;

	while (str[start] != '\0')
	{
	putchar(str[start]);
	start++;
	}
	putchar('\n');
}
