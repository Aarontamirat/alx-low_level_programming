#include <stdio.h>

/**
 * main - prints al passed in arguments
 * @argc: number of command line arguments.
 * @argv: passed in string od cmd args.
 * Return: 0 upon success.
 */

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
