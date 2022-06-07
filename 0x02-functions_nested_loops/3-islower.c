include "main.h"

/**
 * _islower - this one checks if lowercase
 * @c: c is an ascii character used here
 *
 * Return: 1 if is lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
