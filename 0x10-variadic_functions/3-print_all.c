#include "variadic_functions.h"

/**
 * print_all - prints passed in integers, doubles or characters
 * @format: Types of arguments.
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list valist;
	unsigned int i = 0, j, c = 0;
	char *str;
	const char arguments[] = "cifs";

	va_start(valist, format);
	while (format && format[i])
	{
		j = 0;
		while (arguments[j])
		{
			if (format[i] == arguments[j] && c)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(valist, int)), c = 1;
			break;
		case 'i':
			printf("%d", va_arg(valist, int)), c = 1;
			break;
		case 'f':
			printf("%f", va_arg(valist, double)), c = 1;
			break;
		case 's':
			str = va_arg(valist, char *), c = 1;
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		} i++;
	}
	printf("\n"), va_end(valist);
}
