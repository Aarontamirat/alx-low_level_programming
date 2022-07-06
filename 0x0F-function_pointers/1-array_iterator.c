#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - Iterate through a passed in array
 * @array: integer array
 * @size: size of passed in array
 * @action: a function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
