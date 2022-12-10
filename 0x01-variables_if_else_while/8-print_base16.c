#include <stdio.h>
/**
 * main - main function
 * Description - prints whether the integer is positive, negative or zero
 * Return: Always 0 if successful
 *
 */
int main(void)
{
	char c = 'a';

	int x;

	for (x = 0; x < 16; x++)
	{
		if (x < 10)
		{
			putchar(x + '0');
		} else
		{
			putchar(c);
			c++;
		}
	}
	putchar('\n');
	return (0);
}
