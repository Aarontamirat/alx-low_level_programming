#include "main.h"

/**
 * print_number - prints an integer
 * @n: input integer
 * Return: void
 */

void print_number(int n)
{
	unsigned int q, f, count;

	if (n < 0)
	{
		_putchar(45);
		q = n * -1;
	}
	else
	{
		q = n;
	}

	f = q;
	count = 1;

	while (f > 9)
	{
		f /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		_putchar(((q / count) % 10) + 48);
	}
}
