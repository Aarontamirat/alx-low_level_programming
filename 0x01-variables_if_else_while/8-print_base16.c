#include <stdio.h>
/**
 * main - print hexadecimal numbers
 * Return: 0 upon success
 */
int main(void) 
{
	int  n;
	char alphabet;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
