#include "main.h"

/**
 * binary_to_uint - converts a binary number to decimal
 * @b: binary
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int bi;
	int s, dec;

	if (!b)
		return (0);

	bi = 0;

	for (s = 0; b[s] != '\0'; s++)
		;

	for (s--, dec = 1; s >= 0; s--, dec *= 2)
	{
		if (b[s] != '0' && b[s] != '1')
		{
			return (0);
		}

		if (b[s] & 1)
		{
			bi += dec;
		}
	}

	return (bi);
}
