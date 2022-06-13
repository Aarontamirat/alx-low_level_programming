#include "main.h"

/**
 * puts2 - prints string
 * @str: input pointer
 * Return: void
 */

void puts2(char *str)
{
	int i;

	for(i = 0; i < sizeof(str); i++)
	{
		printf(str[i]);
	}
	printf("\n");
}
