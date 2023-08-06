#include "main.h"
/**
 * _isdigit - Checks for a digit
 * @c:The character to be checked
 * Return:1 for digit character or 0 for anything elese
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
