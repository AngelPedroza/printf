#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies the arguments it is passed
 *
 * @argc: the number of arguments passed
 * @argv: the array of arguments
 * Return: 0 if exec is correct
 */

int main(int argc, char *argv[])
{
	int i, prod;

	prod = 1;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
			prod *= atoi(argv[i]);

		printf("%d\n", prod);
	}
	else
		printf("Error\n");

	return (0);
}
