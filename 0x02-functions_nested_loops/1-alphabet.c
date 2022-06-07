#include "main.h"

/**
 * print_alphabet - prints lowercase alphabet
 *
 * Return: void, meaning returns nothing
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
