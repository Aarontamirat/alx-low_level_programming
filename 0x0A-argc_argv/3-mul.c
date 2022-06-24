#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints multiplication
 * @argc: number of passed in cmd args
 * @argv: string array of passed cmd args
 * Return: 0 upon success.
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
