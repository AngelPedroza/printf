#include <stdio.h>

/**
 * main - prints the sum of all fibonacci even numbers
 *
 * Return: always 0
 */
int main(void)
{
	long int i, j, sum, res, lim;

	lim = 4000000;
	res = 2;
	i = 1;
	j = 2;
	sum = 0;
	while (sum < lim)
	{
		sum = i + j;
		i = j;
		j = sum;
		if (sum % 2 == 0)
		{
			res += sum;
		}

	}
	printf("%ld\n", res);
	return (0);
}
