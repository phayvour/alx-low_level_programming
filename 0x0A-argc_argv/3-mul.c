#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two rguements passed to the program
 * @argc: array size
 * @argv: array containing the elements
 *
 * Return: return 0 on success
 */
int main(int argc, char **argv)
{
	int arr_len = argc - 1;

	if (arr_len != 2)
	{
		puts("Error");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);

}
