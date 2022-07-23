#include <stdio.h>
#include "main.h"

/**
 * main - program entry
 * @argc: number of arguments on the cmd
 * @argv: pointer to array that contains string of arguments in cmd
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = argc - 1;

	if (argc == 1)
	{
		printf("%s\n", argv[i]);
	}
	else
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
