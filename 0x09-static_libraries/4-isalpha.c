#include "main.h"
/**
* _isalpha - checks for alpnabetic character
* @c: character to be checked
* Return: 1 if it is a letter else 0
*/
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z' || (c >= 'A' && c <= 'Z')));
}

#include "main.h"
/**
* _abs - computes the absolute value of an integer
* @n: integer to be checked
* Return: absolute value of an integer
*/
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	return (-n);
}
