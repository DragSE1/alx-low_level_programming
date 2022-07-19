#include "main.h"
/**
 * _memset - fills a pointer with a contant byte b for n times
 * @s: pointer to string
 * @b: constant byte
 * @n: no. of times b is filled in
 *
 * Return:  s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{


		*(s + i) = b;

	}

	return (s);
}
