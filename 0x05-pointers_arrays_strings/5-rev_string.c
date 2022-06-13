#include "main.h"

/**
 *rev_string(char *s) - reverses strings
 * @s: an input pointer
 * Return: void
 */

void rev_string(char *s)
{
	int i, maximum, medium;
	char first, last;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	maximum = i - 1;
	medium = maximum / 2;
	while (medium >= 0)
	{
		first = s[maximum - medium];
		last = s[medium];
		s[medium] = first;
		s[maximum - medium] = last;
		medium--;
	}
}
