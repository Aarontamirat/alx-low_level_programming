#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes from src.
 * Return: the pointer to dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
