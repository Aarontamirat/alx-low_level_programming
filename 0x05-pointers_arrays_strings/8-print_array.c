#include "main.h"

/**
 * print_array - prints the whole array
 * @a: passed pointer of char
 * @n: size of array
 * Retunr: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
