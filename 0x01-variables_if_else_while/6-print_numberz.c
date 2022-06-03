#include <stdio.h>
/**
 * main - prints single numbers by putchar
 * Return: 0 if all succeed
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
