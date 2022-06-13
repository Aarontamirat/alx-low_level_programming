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
		printf("%c", s[i];
	}
	printf("\n");
}
