#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned integer
 * @b: array of binary numbers
 *
 * Return: unsigned integer or 0 if the array contains non-binary numbers
 * or if the array is null
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int j;

	j = 0;

	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		j <<= 1;
		if (b[i] == 1)
			j += 1;
	}
	return (j);
}
