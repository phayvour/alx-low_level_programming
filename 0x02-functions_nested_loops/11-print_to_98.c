#include <stdio.h>

/**
 * print_to_98 - countdown/countup to 98
 *
 * @n: beginning of count
 *
 * Return: nothing if successful
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			n--;
		}
	}
	else
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			n++;
		}
	}
	putchar('\n');
}
