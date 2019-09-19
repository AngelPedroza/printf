#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 *main - all unique combs from 00 to 99 separated by comma and a space
 *Return: 0
 */
int main(void)
{
	int i = '0';
	int j = '0';

	for (i = '0'; i <= '9' ; i++)
	{
		for (j = '0' ; j <= '9' ; j++)
		{
			if (i == j || i > j)
				continue;
			putchar(i);
			putchar(j);
			if (i == '9' && j == '9')
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
