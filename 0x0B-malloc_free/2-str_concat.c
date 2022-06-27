#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatinates strings
 * @s1: string number one
 * @s2: string number two
 * Return: new alloacted pointer
 */

char *str_concat(char *s1, char *s2)
{
    char *s;
    int i = 0;
    int str1_len = 1;
    int str2_len = 1;

    while (s1[str1_len] != '\0')
    {
        str1_len++;
    }
    if(str1_len < 2 && str2_len < 2)
    {
        return (NULL);
    }
    else
    {
        s = (char *)malloc((str1_len + str2_len + 1) * sizeof(char));
        while (*s1)
        {
            s[i++] = *s1++;
        }
        while (*s2)
        {
            s[i++] = *s2++;
        }
        s[i] = '\0';
        return (s);
        if (s1 == NULL || s2 == NULL)
         return (s);
    }
}
