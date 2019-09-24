#include "holberton.h"

/**
 * jack_bauer -prnts every minute of the day
 *
 * Return: none
 *
 */

void jack_bauer(void)
{
	int hours = 0;
	int mins = 0;

	for (hours = 0; hours <= 23; hours++)
	{
		for (mins = 0; mins <= 59; mins++)
		{
			_putchar((hours / 10) + '0');
			_putchar((hours % 10) + '0');
			_putchar(':');
			_putchar((mins / 10) + '0');
			_putchar((mins % 10) + '0');
			_putchar('\n');
		}
	}

}
