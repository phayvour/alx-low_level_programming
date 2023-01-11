#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: array size
 * @argv: array containing the elements
 *
 * Return: returns 0
 */
int main(int argc, char **argv)
{
	puts(argv[argc - 1]);

	return (0);
}
