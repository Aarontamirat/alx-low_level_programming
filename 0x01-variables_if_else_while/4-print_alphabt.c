#include <stdio.h>
/**
 * main - prints alphabets except e and q
 * Return: 0 if successful
 */
int main(void)
{
	char alphabets = 'a';

	while (alphabets <= 'z')
	{
		if (alphabets != 'e' && alphabets != 'q')
		{
			putchar(alphabets);
		}
		alphabets++;
	}
	putchar('\n');
	return (0);
}
