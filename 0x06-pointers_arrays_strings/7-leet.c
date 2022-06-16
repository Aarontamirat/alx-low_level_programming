#include "main.h"

/**
 * leet - uses leet to represent strings
 * @s: passed in string
 * Return: converted string
 */

char *leet(char *s)
{
	int count = 0, i;
	int lowercase[] = {97, 101, 111, 116, 108};
	int uppercase[] = {65, 69, 79, 84, 76};
	int replace[] = {52, 51, 48, 55, 49};

	while (*(s + count) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + count) == lowercase[i] || *(s + count) == uppercase[i])
			{
				*(s + count) = replace[i];
				break;
			}
		}
		count++;
	}

	return (s);
}
