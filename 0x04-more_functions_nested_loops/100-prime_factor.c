#include <stdio.h>

/**
 * main - Searching for the required prime
 * Return: 0 upon success
 */
int main(void)
{
	unsigned long int i = 3, num = 612852475143;

	for (; i < 12057; i += 2)
	{
		while (num % i == 0 && num != i)
			num /= i;
	}
	printf("%lu\n", num);
	return (0);
}
