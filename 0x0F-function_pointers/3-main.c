#include "3-calc.h"

/**
 * main - Simple calculator
 * @argc: number of arguments
 * @argv: arguments array
 * Return: 0 - Success
 */
int main(int argc, char *argv[])
{
	int args1, result, args2;
	char out;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	args1 = atoi(argv[1]);
	args2 = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	out = *argv[2];

	if ((out == '/' || out == '%') && args2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = func(args1, args2);

	printf("%d\n", result);

	return (0);
}
