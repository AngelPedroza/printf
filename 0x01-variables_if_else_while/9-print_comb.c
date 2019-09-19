#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 *main - prints all combs of single digits separated by a comma and a space
 *Return: 0
 */
int main(void)
{
	int n = '0';

	for (n = '0' ; n <= '9' ; n++)
	{

		putchar(n);
		if (n == '9')
		{
			break;
		}
		putchar(',');
		putchar(' ');

	}
	putchar('\n');
	return (0);
}
