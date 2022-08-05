#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints given string
 * @separator: strings to separate given strings
 * @n: number of arguments given
 *
 * Return: on condition
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		if (separator == NULL || i == (n - 1))
		{
			printf("%s", va_arg(arg, char *));
		}
		else if (va_arg(arg, char *) == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s%s", va_arg(arg, char *), separator);
		}
	}

	printf("\n");

	va_end(arg);
}

