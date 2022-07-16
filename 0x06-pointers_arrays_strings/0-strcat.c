#include "main.h"
/**
 * _strcat - concatenates two strings
 * @n - local variable
 *
 * @*dest - func. parameter to work upon
 *
 * @*src - func parameter to use
 *
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
	int n;

	for (n = 0, *(src + n) != '\0', n++)
	{
		*(dest + (sizeof(dest) - 1)) = *(src + n);
	}

	return (0);
}
