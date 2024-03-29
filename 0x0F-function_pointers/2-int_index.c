#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - finds an integer
 * @array: array of numbers
 * @size: size of the array
 * @cmp: function pointer
 *
 * Return: nothing
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);

			}
			else
			{
				continue;
			}
		}
	}

	return (-1);
}
