#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - prints the alphabet in lowercase
 *Return: 0
 */
int main(void)
{
	int ch = 'a';
	int n = '0';

	for (n = '0' ; n <= '9' ; n++)
	{
		putchar(n);
	}

	for (ch = 'a' ; ch <= 'f' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
