#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - iterates given array
 * @array: array to be iterated
 * @size: size of array
 * @action: action to be taken on the array
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
