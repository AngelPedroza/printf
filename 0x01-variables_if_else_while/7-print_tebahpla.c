#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 *main - prints the alphabet in lowercase backwards
 *Return: 0
 */
int main(void)
{
	int ch = 'z';

	for (ch = 'z' ; ch >= 'a' ; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
