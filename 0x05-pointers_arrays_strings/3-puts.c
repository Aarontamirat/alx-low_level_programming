#include "main.h"

/**
 * _puts - Prints a string using puts
 * @str: pointer to char
 * Return: void
 */

void _puts(char *str)
{
	for(int i = 0; i < sizeof(str); i++)
	{
	puts(str[i]);
	}
	puts('\n');
}
