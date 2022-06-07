#include "main.h"

/**
 * _abs - identifies the absolute value of a number
 * @n: n is an integer number
 *
 * Return - the number
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
