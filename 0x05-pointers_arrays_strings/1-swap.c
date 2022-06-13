#include "main.h"

/**
 * swap_int - integer value swapping
 * @a: pointer one
 * @b: pointer two
 * Return: void;
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
