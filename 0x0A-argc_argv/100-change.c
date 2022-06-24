#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints min number of coins it take to a value
 * @argc: number of cmd args.
 * @argv: String of cmd line args.
 * Return: 0 upon success.
 */
int main(int argc, char *argv[])
{
	int cents, num_of_coins = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;
		num_of_coins += 1;
	}
	printf("%d\n", num_of_coins);
	return (0);
}
