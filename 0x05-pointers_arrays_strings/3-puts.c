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
		putchar(str[i]);
		i++;
	}

	putchar('\n');
}
