#include "main.h"

/**
 * print_alphabet_x10 - print alphabet
 *
 * Return: nothing if successful
 */

void print_alphabet_x10(void)

{
	int x = 0, y = 'a';

	while (x < 10)
	{
		while (y <= 'z')
		{
			_putchar(y);
			y++;
		}

		_putchar('\n');
		y = 'a';
		x++;
	}
}
