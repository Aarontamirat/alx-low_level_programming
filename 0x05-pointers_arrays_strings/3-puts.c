#include "main.h"

/**
 * _puts - Prints a string using puts
 * @str: pointer to char
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
