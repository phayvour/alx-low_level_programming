#include <stdio.h>

/**
 * main - prints the number of arguements passed ti a program
 * @argc: array size
 * @argv: array containing the elements
 *
 * Return: return 0 on success
 */
int main(int argc, char **argv)
{
	(void)(argv);
	printf("%d\n", argc - 1);

	return (0);
}
