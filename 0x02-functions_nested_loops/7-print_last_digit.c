#include "main.h"

/**
 * print_last_digit - does just that
 *
 * @a: character to be tested
 *
 * Return: the last digit of @a
 */

int print_last_digit(int a)
{
	int ld = a % 10;

	ld = ld < 0 ? -1 * ld : ld;
	_putchar(ld + '0');
	return (ld < 0 ? -1 * ld : ld);
}
