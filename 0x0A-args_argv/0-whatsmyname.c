#include <stdio.h>

/**
 * main - prints a name inserted at cmd line
 * @argc: size of command line arguments
 * @argv: an array of command arguments
 * Return: 0 upon success.
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
