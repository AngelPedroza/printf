#include "holberton.h"

/**
 *
 *
 *
 *
 *
 */

void print_number(int n)
{

/*	int a;
	int b = 1;

	for (a = 0; n / b > 9 ; a++)
	{
		b = b * 10;
	}
	for (; a >= 0; a--)
	{
		n = n % b;
		_putchar(n + '0');
		b = b / 10;
	}

*/
	if(n < 0)
	{
		n *= -1;
		_putchar('-');
	}
        if (n/10)
        {
	        print_number(n/10);
        }
		_putchar((n % 10) + '0');

	

}
