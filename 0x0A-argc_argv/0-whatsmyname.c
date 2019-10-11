#include "holberton.h"
#include <stdio.h>

/**
 *
 *
 *
 *
 */

int main(int argc, char *argv[])
{
	if (argc > 1)
		printf("%s\n", argv[1]);
	else
	       printf("%s\n", argv[0]);
	return (0);
}
