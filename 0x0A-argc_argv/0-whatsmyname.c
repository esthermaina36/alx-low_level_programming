#include <stdio.h>
/**
* main - prints its name
* @argc: number of command line argument
* @argv: array that contains the command line
* Return: 0 wnen successful
*/
int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
