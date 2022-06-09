#include "main.h"

/**
 * print_line - drawing a straight line.
 * @n: an integer
 * Return: 0 upon success
 */
void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
