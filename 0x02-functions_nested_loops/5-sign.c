#include "main.h"

/**
 *
 * print_sign - to test characters
 *
 * @n: character to be tested
 *
 * Return: 1 if positive integer, 0 if int 0, otherwise return -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}else if (n == 0)
	{
		_putchar('0');
		return (0);
	}else
	{
		_putchar('-');
		return (-1);
	}
}
