#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: length to give
 * Return: allocated char pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int count1 = 0, count2 = 0, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[count1] != '\0')
	{
		count1++;
	}

	while (s2[count2] != '\0')
	{
		count2++;
	}

	if (n > count2)
	n = count2;
	ptr = malloc((count1 + n + 1) * sizeof(char));

	if (ptr == NULL)
		return (0);

	for (i = 0; i < count1; i++)
	{
		ptr[i] = s1[i];
	}

	for (; i < (count1 + n); i++)
	{
		ptr[i] = s2[i - count1];
	}
	ptr[i] = '\0';

return (ptr);
}
