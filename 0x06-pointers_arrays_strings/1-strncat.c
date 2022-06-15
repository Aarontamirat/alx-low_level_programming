#include "main.h"

/**
 * _strncat - concatenates for allowed number
 * of bytes
 *
 * @dest: passed in string 1
 * @src: passed in string 2
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
