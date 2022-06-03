#include <stdio.h>

/**
 * main - prints all the lowercase alphabet
 * Return: Always 0 at success
 */
int main(void)
{
        int alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
		putchar(alphabets);
	for (alphabets = 'A'; alphabets <= 'Z'; alphabets++)
		putchar(alphabets);

	putchar('\n');
        return (0);
}

