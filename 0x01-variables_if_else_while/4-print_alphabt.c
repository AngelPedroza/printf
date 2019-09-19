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

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		if (ch == 'q' || ch == 'e')
			continue;
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
