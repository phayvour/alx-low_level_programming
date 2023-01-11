#include <stdio.h>

/**
 * main - prints all arguements passed to the program
 * @argc: array size
 * @argv: array containing the elements
 *
 * Return: returns 0 on success
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		puts(argv[i]);

	return (0);
}
