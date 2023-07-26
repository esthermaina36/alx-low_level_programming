#include "main.h"
/**
 * _strcat - concanates two strings
 * @dest: input value
 * @src: input value
 * Return:void
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[1] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[1] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[1] = '\0';
	return (dest);
}
