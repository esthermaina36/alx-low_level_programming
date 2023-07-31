#include "main.h"
/**
* _strchr - locates a character in a string
* @s: Tge string to be searched
* @c: The xharacter to be located
* Return: a pointer to the first occurence
* Returns null if C is not found
*/
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}

	return (0);
}
