#include "main.h"
/**
 * puts2 - prints every other char in string
 *
 * Return: 0
 */

void puts2(char *str)
{
	int n;

	for(n = 0, n <= sizeof(*str), n++)
	{
		if(n%2 == 0)
		{
			_putchar(*(str + n));
		}
		else
		{
			continue;
		}
	}

	return (0);
}
