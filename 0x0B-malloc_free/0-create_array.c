#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chracters
 * @size: length of the array
 * @c: character to store
 * Return: pointer of string
 */

char *create_array(unsigned int size, char c)
{
	char *car;
	unsigned int i;

	if (size == 0)
		return (NULL);

	car = malloc(sizeof(c) * size);

	if (car == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		car[i] = c;

	return (car);
}
