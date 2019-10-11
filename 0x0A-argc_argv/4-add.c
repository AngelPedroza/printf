#include "holberton.h"
#include <ctype.h>
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
	int i, sum;

	sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (1);
	}

	else
	{
		for (i = 1; i < argc; i++)

			if (*argv[i] < 48 || *argv[i] > 57)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += atoi(argv[i]);
			}
		printf("%d\n", sum);
		return (0);

	}
	return (1);

}
