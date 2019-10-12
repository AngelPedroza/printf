#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 *
 * @argc: number of arguments
 * @argv: the array containing the values of the args
 * Return: 0 if exec is c0rrect, 1 otherwise
 */

int main(int argc, char *argv[])
{
	int i, j, sum;

	sum = 0;
	if (argc < 2)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{

			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (argv[i][j] < 47 || argv[i][j] > 57)
				{
					printf("Error\n");
					return (1);
				}

			}
			sum += atoi(argv[i]);

		}

		printf("%d\n", sum);
		return (0);
	}
}
