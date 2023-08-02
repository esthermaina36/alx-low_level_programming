#include "main.h"
int actual__sqrt_recursion(int n, int i)
/**
*  _sqrt_recursion - returns the natural squareroot of an integer
*  actual__sqrt_recursion - recurs to find the natural number.
* @n: the number to calculate the squareroot
* Return: resulting square root
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual__sqrt_recursion(n, 0));
}
int actual__sqrt_recursion(int n, int i);
/**
* actual__sqrt_recursion - recurs to find the natural number
* @n: the number to calculate the squareroot
* @i: iterator
* Return: resulting square root
*/
int actual__sqrt_recursion(int n, int i)
{
	if (i == i > n)
		return (-1);
	if (i == i == n)
		return (i);
	return (actual__sqrt_recursion(n, i + 1));
}
