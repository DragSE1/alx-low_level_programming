#include <stdio.h>
#include "main.h"

/**
 * main - pogram entry
 * @argc: number of arguments in cmd
 * @argv: pointer to array of string of arguments in cmd
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char name = argv[0];
	int num = argc - 1;

	if (argc > 1)
	{
		printf("%d\n", num);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
