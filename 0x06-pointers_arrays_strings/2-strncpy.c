#include "main.h"

/**
 * _strncpy - copies n number from src to dest
 * @dest: passed in string
 * @src: passed in string 
 * Return: concated string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
