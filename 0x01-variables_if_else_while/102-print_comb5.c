#include <stdio.h>
/**
 * main - main function
 * Description - prints whether the integer is positive, negative or zero
 * Return: Always 0 if successful
 *
 */
int main(void)
{
	int x1, x2;

	for (x1 = 0; x1 < 100; x1++)
	{
		for (x2 = 0; x2 < 100; x2++)
		{
			if (x1 < x2)
			{
				putchar((x1 / 10) + 48);
				putchar((x1 % 10) + 48);
				putchar(' ');
				putchar((x2 / 10) + 48);
				putchar((x2 % 10) + 48);
				if (x1 != 98 && x2 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
