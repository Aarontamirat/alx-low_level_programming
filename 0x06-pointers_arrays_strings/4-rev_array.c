#include "main.h"

/**
 * reverse_array - reverses the array passed to it
 * @a: passed in integer array
 * @n: length of the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int temp[n];
	int i;

	for (i = 0; i < n; i++)
	{
		temp[i] = a[n -1 -i];
	}
	for (i = 0; i < n; i++)
	{
		a[i] = temp[i];
	}
}
