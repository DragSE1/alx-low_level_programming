#include "main.h"
/**
 * swap_int - swaps the value of two int var
 * 
 * @a : first member
 * @b : second member
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	int d = *b;

	*a = d;
	*b = c;

	return (0);
}
