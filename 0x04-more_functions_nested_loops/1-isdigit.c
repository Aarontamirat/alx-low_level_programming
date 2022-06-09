#include "main.h"

/**
 * _isdigit - checking whether a param is from 0-9
 * @c: number to be checked
 * Return: 1 if it is a digit, 0 if not.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
