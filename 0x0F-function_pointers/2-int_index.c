#include "function_pointers.h"

/**
 * int_index - Searching for a certain integer
 * @array: passed in integer array
 * @size: array size
 * @cmp: a function pointer
 * Return: 0 or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int counter;

	if (array && cmp)
	{
		for (counter = 0; counter < size; counter++)
		{
			if (cmp(array[counter]) != 0)
				return (counter);
		}
	}

	return (-1);
}
