#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function used to add all arguments
 * @n: number of arguments to be taken
 *
 * Return: on condition
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;

	va_list arg;

	if (n == 0)
	{
		return (0);
	}

	va_start(arg, n);

	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(arg, int);
	}

	va_end(arg);
	return (sum);
}


