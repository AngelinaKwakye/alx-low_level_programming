#include "main.h"

/**
 *print_alphabet - pprints the letter of the alphabetsin small case
 *
 *Return: void
 */

void print_alphabet(void)
{
	char y;

	for (y = 'a'; y <= 'z'; y++)
	{
		putchar(y);
	}
	_putchar('\n');
}
