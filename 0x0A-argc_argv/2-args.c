#include "holberton.h"
#include <stdio.h>

/**
 * main - returns all arguments it receives
 *
 * @argc: number of arguments
 * @argv: string that contains the arguments received
 * Return: 0 if exec is correct
 */

int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
