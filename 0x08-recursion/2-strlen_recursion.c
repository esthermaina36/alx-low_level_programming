#include "main.h"
#include <stdio.h>
/**
* _strlen_recursion - returns a string length
* @s: the string to be measured
* main - checks the code
* Return:0
*/
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}
	return (longit);
}
