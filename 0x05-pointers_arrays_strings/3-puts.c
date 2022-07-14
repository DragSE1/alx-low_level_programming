#include "main.h"
/**
 * _puts - prints a string
 *
 * Return: 0
 */

void _puts(char *str)
{
	int n;

	for(n = 0, n <= sizeof(*str), n++)
	{
		_putchar(*(str + n));
	}

	_putchar(\n);
	return (0);
}
