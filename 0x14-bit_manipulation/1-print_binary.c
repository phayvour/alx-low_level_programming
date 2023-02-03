#include "main.h"

/**
 * _power - calculate base and power
 * @base: base of the exponent
 * @pow: power of the exponent
 *
 * Return: value of base and power
 */
unsigned long int _power(unsigned int base, unsigned int pow)
{
	unsigned long int num;
	unsigned int i;

	num = 1;
	for (i = 0; i <= pow; i++)
		num *= base;
	return (num);
}

/**
 * print_binary - converts a number to binary
 * @n: number to be converted
 */
void print_binary(unsigned long int n)
{
	unsigned long int dev, result;
	char flag = 0;

	dev = _power(2, sizeof(unsigned long int) * 8 - 1);

	while (dev != 0)
	{
		result = n & dev;
		if (result == dev)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || dev == 1)
		{
			_putchar('0');
		}
		dev >>= 1;
	}
}
