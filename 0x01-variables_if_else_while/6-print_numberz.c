#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - prints the numbers from 1 to 9
 *Return: 0
 */
int main(void)
{
	int ch = '0';

	for (ch = '0' ; ch <= '9' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
