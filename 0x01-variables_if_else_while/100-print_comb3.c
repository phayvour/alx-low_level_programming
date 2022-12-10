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

	for (x1 = 0; x1 < 9; x1++)
	{
		for (x2 = x1 + 1; x2 < 10; x2++)
		{
			putchar((x1 % 10) + '0');
			putchar((x2 % 10) + '0');

			if (x1 == 8 && x2 == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
