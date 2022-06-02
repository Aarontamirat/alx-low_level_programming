#include <stdio.h>
/**
 * main - prints the size of types
 * Return: 0 if program exists properly, non zero otherwise
 */
int main(void)
{
	printf("The size of an integer is: %d byte(s)\n", sizeof(int));
	printf("The size of a long integer is: %d byte(s)\n", sizeof(long int));
	printf("The size of a short integer is: %d byte(s)\n", sizeof(short int));
	printf("The size of a character is: %d byte(s)\n", sizeof(char));
	printf("The size of a float is: %d byte(s)\n", sizeof(float));
	printf("The size of a double is: %d byte(s)\n", sizeof(double));
	return (0);
}
