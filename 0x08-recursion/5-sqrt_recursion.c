#include "main.h"

/**
 * _sqrt_recursion - calling recurring function
 * @n: integer n
 * Return: integer
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - returns to _sqrt_recursion
 * @n: integer
 * @i: integer
 * Return: square root
 */
int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}
