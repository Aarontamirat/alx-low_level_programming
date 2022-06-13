#include "main.h"

/**
 * puts_half - Prints out half the string
 * @str: input characters
 * Return: void
 */

void puts_half(char *str)
{
	int size;

	for(size = sizeof(str)/2; (unsigned)size < sizeof(str); size ++)
	{
		putchar(str[size]);
	}
	putchar('\n');
}
