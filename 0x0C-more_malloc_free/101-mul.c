#include "main.h"

/**
 * main - multiplying two numbers using malloc
 * @argc: number of arguments
 * @argv: arguments passed in
 * Return: integers
 */

int main(int argc, char *argv[])
{
	unsigned long product;
	int i, j;

	if (argc != 3)
	{
	       	printf("Error\n");
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > 57 || argv[i][j] < 48)
			{
				printf("Error\n");
				exit(98);
			}
		}

	}
	product = atol(argv[1]) *  atol(argv[2]);
	printf("%lu\n", product);
	return (0);
}
