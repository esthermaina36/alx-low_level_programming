#include <stdio.h>
#include <stdlib.h>
/**
* main - prints its name
* @argc: number of command line argument
* @argv: array that contains the command line
* Return: 0 wnen successful
*/
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);
	return (0);
}
