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
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	new = (char *)malloc(sizeof(char) * (i + 1));

	if (new == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		new[j] = str[j];

	return (new);
}
