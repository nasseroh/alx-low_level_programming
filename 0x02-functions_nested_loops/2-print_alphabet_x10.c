#include "main.h"

/**
 * print_alphabet_x10 - prints lower alphabet 10 times
 */

void print_alphabet_x10(void)
{
	int x;
	int y;

	for (x = 0; x < 10; x++)
	{
		for (y = 'a'; y <= 'z'; y++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
}
