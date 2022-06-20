#include "main.h"

/**
 * _memcpy - copies from buffer to another
 * @dest: dstination char array
 * @src: source char array
 * @n: bytes from memory area
 * Return: dest array
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src [i];
	}

	return (dest);
}
