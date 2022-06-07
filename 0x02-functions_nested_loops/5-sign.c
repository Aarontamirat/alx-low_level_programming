include "main.h"

/**
 * print_sign - prints either pos or neg of a number
 * @n: n is an integer number
 *
 * Return: 1 when positive, 0 when zero, -1 when negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
