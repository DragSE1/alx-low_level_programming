#include "main.h"

/**
 * _strchr - locates a char in a string
 * @s: string to be searched
 * @c: char to search for
 *
 * Return: s
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; i < sizeof(s); i++)
	{
		if (*(s + i) != c)
		{
			*(s + i) = NULL;
		}
		else if (*(s + i) == c)
		{
			break;
		}
	}

	return (s);
}
