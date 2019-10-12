#include "holberton.h"
#include <stdio.h>

/**
 * main - returns the name of the executable
 *
 * @argc: the number of arguments received
 * @argv: the array the contains the values of the arguments
 * Return: 0 if program execs correcttly
 */

int main(int argc, char *argv[])
{
	if (argc > 1)
		printf("%s\n", argv[1]);
	else
	       printf("%s\n", argv[0]);
	return (0);
}
