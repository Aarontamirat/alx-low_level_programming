#include "main.h"

/**
 * _strchr - locates fgirst occurance of a char
 * @s: passed in char array
 * @c: character to find
 * Return: char array s
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return(s);
	}
	return (0);
}
