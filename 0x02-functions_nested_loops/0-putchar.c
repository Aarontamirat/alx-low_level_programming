#include "main.h"

/**
 * main - printing out _putchar
 *
 * Description: this program simply prints _putchar
 *
 * Return: 0 up on success
 */

int main(void)
{
	char text[9] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');
	return (0);
}
