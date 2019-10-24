#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * main_opcodes - prints the opcodes of its own main fuction
 *
 * @argc: argument count
 * @argv: argument vector of chars
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	return (0);
}
