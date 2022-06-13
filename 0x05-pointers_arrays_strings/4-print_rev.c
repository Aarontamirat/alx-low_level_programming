#include "main.h"

/**
 * print_rev - Prints strings in reverse
 * @s: pointer
 * Return: void
 */

void print_rev(char *s)
{
	int i;

	for(i = sizeof(s); i > 0; i++)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
