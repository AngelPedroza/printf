#include "holberton.h"

void print_diagonal(int n)
{
        int i;
        for (i = 0; i <= n; i++)
        {
                for (j = 0; j <= n; j++)
                {
                        _putchar(92);
                        _putchar('\n');
                }
        }
	_putchar('\n');
}
