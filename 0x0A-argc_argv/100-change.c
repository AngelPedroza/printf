#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the minimum number of coins
 * to make change for an amount of money
 *
 * @argc: the number of arguments, arg 2 receives amount of money
 * @argv: the array containing arguments index 1 contains the money
 * Return: 0 if code exec correctly, 1 otherwise.
 */

int main(int argc, char *argv[])
{

	int i, coins, cents[] = {25, 10, 5, 2, 1};

	int change = atoi(argv[1]);

	if (change < 0)
		printf("0\n");
	coins = 0;
	i = 0;

	if (argc == 2)
	{
		while (change > 0)
		{
			coins += change / cents[i];
			change = change % cents[i];
			if (change % cents[i] != 0)
				i++;
		}
		printf("%d\n", coins);
		return (0);
	}
	printf("Error\n");
	return (1);
}
