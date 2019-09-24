#include "holberton.h"
#include <stdio.h>


/**
 * print_to_98 - returns numbers fwd or bckwd to 98.
 * @n: the number to start from.
 */

void print_to_98(int n)
{
	while (n != 98)
	{
		if (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		else if (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("98\n");
}
