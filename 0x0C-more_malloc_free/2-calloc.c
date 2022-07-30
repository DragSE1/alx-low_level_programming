#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - mallocs a several blocks of mem of same size
 * @nmemb: number of blocks
 * @size: size of all blocks
 *
 * Return: on condition
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;
	unsigned int i;

	array = malloc(nmemb * size);

	if (array == NULL)
	{
		return (NULL);
	}
	else if (nmemb ==  0 || size == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < (nmemb * size); i++)
		{
			array[i] = 0;
		}

		return (array);
	}
}


