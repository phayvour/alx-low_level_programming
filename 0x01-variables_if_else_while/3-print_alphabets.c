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
	char x = 'A';

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (x = 'A'; x <= 'Z'; x++)
		putchar(x);
	putchar('\n');
	return (0);
}
