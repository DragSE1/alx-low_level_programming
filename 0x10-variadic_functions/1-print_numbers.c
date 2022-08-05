#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_numbers - prints given numbers
 * @separator: string to separate the nums
 * @n: number of arguments given
 *
 * Return: on condition
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
		{
			printf("%d", va_arg(arg, int));
		}
		else
		{
			printf("%d%s", va_arg(arg, int), separator);
		}
	}

	printf("\n");

	va_end(arg);
}

