#include <stdio.h>
/**
* main - prints its name
* @argc: number of command line argument
* @argv: array that contains the command line
* Return: 0 wnen successful
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
