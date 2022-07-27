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
	int sum = 0;
	int i;
	int t;


	for (t = 0; t < 1; t++)
	{
		for (i = 1; i < argc; i++)
		{
			if (argc < 2)
			{
				printf("0\n");
				break;
			}
			else if (typeof(int) != atoi(argv[i]))
			{
				printf("Error\n");
				return (1);

				break;
			}
			else
			{
				sum = sum + atoi(argv[i]);
			}

		}


		if (typeof(int) == atoi(argv[i])
		{
			printf("%d\n", sum);
		}
		else
		{
			break;
		}

	}

	return (0);
}

