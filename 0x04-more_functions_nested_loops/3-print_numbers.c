#include "main.h"

/**
 * print_numbers - does just that
 *
 * Return: nothing on success
 */
void print_numbers(void)
{
	int i = 0;

	for (i = 0; i <= 9; i++)
		_putchar(i + '0');
	_putchar('\n');
}
