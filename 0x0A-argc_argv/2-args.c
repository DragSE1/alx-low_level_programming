#include <stdio.h>
#include "main.h"

/**
 * main - program entry
 * @argc: number of argument in cmd
 * @argv: pointer to array of string of arguments
 *
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}


