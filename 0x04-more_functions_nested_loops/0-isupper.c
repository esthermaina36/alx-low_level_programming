#include "main.h"
/**
 * _isupper - checks the lowercase character
 * @c:The character to be checked
 * Return:1 for uppercase and 0 for lowercase
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
