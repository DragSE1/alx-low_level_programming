#include "main.h"
/**
 * print_rev - prints string in reverse
 *
 * Return: 0
 */

void print_rev(char *s)
{
	int n;

	for(n = sizeof(*s), n >= 0, n--)
	{
		_putchar(*(s + n));
	}

	return (0);
}
