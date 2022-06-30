#include "main.h"

/**
 * _realloc -  reallocates a memory using malloc and free
 * @ptr: void pointer
 * @old_size: old size
 * @new_size: new size
 * Return: reallocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *cl, *loc;
	unsigned int i;

	if (ptr != NULL)
	cl = ptr;
	else
	{ return (malloc(new_size)); }
	if (new_size == old_size)
	return (ptr);
	if (new_size == 0 && ptr != NULL)
	{ free(ptr);
	return (0); }
	loc = malloc(new_size);
	if (loc == NULL)
	return (0);
	for (i = 0; i < (old_size || i < new_size); i++)
	{
		*(loc + i) = cl[i];
	}
	free(ptr);
return (loc);
}
