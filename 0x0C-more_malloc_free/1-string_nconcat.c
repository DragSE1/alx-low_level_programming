#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates a string to the first n byte of another string
 * @s1: string one
 * @s2: string two
 * @n: number of bytes of s2 to be conc.
 *
 * Return: on condition
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;

	unsigned int i, j, size;

	size = sizeof(s1) + n;
	str = malloc(size + 1);

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= (size - 1); i++)
	{
		j = (i + n) - size;


		if (s1[i] == '\0' || s2[j] == '\0')
		{
			str[i] = ' ';
		}
		else if (i < sizeof(s1))
		{
			str[i] = s1[i];
		}
		else if (j == sizeof(s2))
		{
			break;
		}
		else
		{
			str[i] = s2[j];
		}
	}

	str[size - 1] = '\0';
	return (str);
}



