#include "main.h"

/**
 * print_number - prints an integer.
 * @n: an integer.
 * Return: void.
 */
void print_number(int n)
{
	unsigned int num1, num2, count;

	if (n < 0)
	{
		_putchar(45);
		num1 = n * -1;
	}
	else
	{
		num1 = n;
	}

	num2 = num1;
	count = 1;

	while (num2 > 9)
	{
		num2 /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		_putchar(((num1 / count) % 10) + 48);
	}
}
