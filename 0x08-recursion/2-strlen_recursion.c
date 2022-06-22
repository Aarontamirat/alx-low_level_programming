#include "main.h"

/**
 * _strlen_recursion - prints a size
 * @s: char array string
 * Return: recursion
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}
