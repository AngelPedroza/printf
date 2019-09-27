#include "holberton.h"

/**
 * print_triangle - prints a triangle n size
 *
 * @size: the size of the triangle in x and y
 */

void print_triangle(int size)
{
	int f, c;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (f = 1; f <= size; f++)
		{
			for (c = 1; c <= size; c++)
			{
				if (c <= size - f)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
