#include "main.h"

/**
 * times_table - prints times table
 *
 * Return: nothing if successful
 */
void times_table(void)
{
	int s = 0, e, x = 0;

	while (x <= e)
	{
		while (s <= e)
		{
			int y = x * s;

			if (s != 0)
			{
				_putchar(',');
				if (y < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else
					_putchar(' ');
			}

			if (y < 10)
				_putchar(y + '0');
			else
			{
				_putchar(y / 10 + '0');
				_putchar(y % 10 + '0');
			}

			if (s == e)
				_putchar('\n');
			s++;
		}
		s = 0;
		x++;
	}
}
