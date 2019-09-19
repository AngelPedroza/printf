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
	int cP = 'A';

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	for (cP = 'A' ; cP <= 'Z' ; cP++)
		putchar(cP);
	putchar('\n');
	return (0);
}
