#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 *main - all unique combs from 000 to 999 separated by comma and a space
 *Return: 0
 */
int main(void)
{
	int i = '0';
	int j = '0';
	int k = '0';

	for (i = '0'; i <= '9' ; i++)
	{
		for (j = '0' ; j <= '9' ; j++)
		{
			for (k = '0' ; k <= '9' ; k++)
			{
				if ((i == j || i > j) || (j == k || j > k))
					continue;
				putchar(i);
				putchar(j);
				putchar(k);
				if (i == '7' && j == '8' && k == '9')
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
