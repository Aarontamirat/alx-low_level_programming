#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints a passed in name
 * @name: pointer to a string of name
 * @f: pointer to function
 */

void print_name(char *name, void (*f) (char *))
{
	if (!f || !name)
		return;
	f(name);
}
