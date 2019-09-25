#include <stdio.h>

/**
 * main - prints the sum of all multiples of 3 and five below 1024
 *
 */

int main(void)
{
	int a;
	int res;

	for (a = 0 ; a <= 1024; a++)
	{
		if ((a % 3 == 0) || (a % 5 == 0))
		{
			res += a;
		}
	}
	printf("%d\n", res);
	return (0);
}
