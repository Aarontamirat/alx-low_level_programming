#include "main.h"

/**
 * _abs - identifies the absolute value of an integer
 * @n: n is an integer number
 * Return -  an integer
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
