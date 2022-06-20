#include "main.h"

/**
 * _memset - fills buffer
 * @s: character array
 * @b: input value
 * @n: bytes of memory area
 * Return: array s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
