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

	for (n = '0' ; n <= '8' ; n++)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
	}
	putchar('9');
	return (0);
}
