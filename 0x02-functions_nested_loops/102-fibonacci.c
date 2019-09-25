#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers
 *
 * Return: always 0
 */
int main(void)
{
	long int a = 1;
	long int b = 2;
	long int sum = 0;
	int i = 0;

	printf("%ld, ", a);
	printf("%ld, ", b);
	while (i < 48)
	{
		sum = a + b;
		a = b;
		b = sum;
		if (i != 47)
		{
			printf("%ld, ", sum);
		}
		else
		{
			printf("%ld", sum);
		}
		i++;

	}
	printf("\n");

	return (0);
}
