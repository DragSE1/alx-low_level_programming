#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - creates an array of speciic size and initialize
 * @size: size to allocate
 * @c: character to be initialized
 *
 * Return: on condition
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	for (i = 0; i < size; i++)
	{
		a = malloc(size);

		if (size == 0)
		{
			return (NULL);
		}
		else if (a == NULL)
		{
			return (NULL);
		}
		else
		{
			a[i] = c;
		}
	}

	free(a);
	return (a);
}
