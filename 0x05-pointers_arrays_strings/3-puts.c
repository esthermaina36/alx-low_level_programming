#include "main.h"
/**
 * _puts - puts a string followed by a new line
 * @str: the string to be printed
 * _putchar: - writes a chatacter to stdout
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
