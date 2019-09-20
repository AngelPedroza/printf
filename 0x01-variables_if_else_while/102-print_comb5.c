#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 *main - all unique combs from 00 to 99 separated by comma and a space
 *Return: 0
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 99 ; i++)
	{
		for (j = 0 ; j <= 99 ; j++)
		{
			if (i >= j)
			{
				continue;
			}
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');
			if (i == 98 && j == 99)
			{
				continue;
			}

			putchar(',');
			putchar(' ');
		}

	}
	putchar('\n');
	return (0);
}
