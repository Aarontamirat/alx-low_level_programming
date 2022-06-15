#include "main.h"

/**
 * _strncpy - copies n number from src to dest
 * @dest: passed in string
 * @src: passed in string 
 * Return: concated string
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
