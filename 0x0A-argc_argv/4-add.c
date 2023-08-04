#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* main - prints its name
* @argc: number of command line argument
* @argv: array that contains the command line
* Return: 0 wnen successful
*/
int main(int argc, char *argv[])
{
	int sum = 0;
	int i, j;

	for (i = 1; i < argc; i++)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}

		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

