#include <stdio.h>
#include <stdlib.h>

/**
 * isNumeric - checks if a string is a number or not
 * @str: string in question
 *
 * Return: returns true if number, otherwise false
 */
int isNumeric(const char *str)
{
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

/**
 * main - adds positive numbers passed to the program
 * @argc: array size
 * @argv: content of the array
 *
 * Return: returns 0 on success
 */
int main(int argc, char **argv)
{
	int count = 1, sum = 0;

	for (count = 1; count < argc; count++)
	{
		if (isNumeric(argv[count]) == 0)
		{
			puts("Error");
			return (1);
		}
		sum = sum + atoi(argv[count]);
	}
	printf("%d\n", sum);
	return (0);
}
