#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - program entry
 * @argc: number of arguments in cmd
 * @argv: pointer to array of string in cmd
 *
 * Return: on condition
 */

int main(int argc, char *argv[])
{
	int i;
	int mult = 1;

	for (i = 1; i < 3; i++)
	{
		if (argc < 3)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			mult = mult * atoi(argv[i]);
		}
	}

	printf("%d\n", mult);
	return (0);
}
