#include <stdio.h>

/**
 * main - prints all the lowercase alphabet
 * Return: Always 0 at success
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
