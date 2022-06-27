#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a passed in string
 * @str: string pointer
 * Return: string;
 */

char *_strdup(char *str)
{
	char *new;
	int count = 1;
	int i = 0;

	while (str[count] != '\0')
	{
		count++;
	}
	if (count < 2)
	{
		return (NULL);
	}
	else
	{
		new = (char *)malloc(sizeof(char) * count);
		while (*str)
		{
			new[i++] = *str++;
		}
		new[i] = '\0';
		return (new);
	}
}
