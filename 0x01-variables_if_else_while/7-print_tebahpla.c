#include <stdio.h>
/**
 * main - prints the alphabet in reverse order
 * Return: 0 if successful
 */
int main(void)
{
	char alphabets;
	for (alphabets = 'z'; alphabets >= 'a'; alphabets--) {
		putchar(alphabets);
	}
	putchar('\n');
	return (0);
}
