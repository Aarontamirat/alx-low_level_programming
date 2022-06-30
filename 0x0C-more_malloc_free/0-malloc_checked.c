#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: bytes to be allocated
 * Return: void pointer
 */

void *malloc_checked(unsigned int b)
{
	void *point;

	point = malloc(b);
	if (point == NULL)
		exit(98);
	return (point);
}
