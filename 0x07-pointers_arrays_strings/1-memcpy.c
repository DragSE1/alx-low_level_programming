#include "main.h"
 /**
  * _memcpy - function to copy n bytes from string src to string dest
  *
  * @dest: string to be copied to
  * @src: string to be copied from
  * @n: no. of bytes to be copied from src
  *
  * Return: dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}


