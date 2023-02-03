#include "main.h"

/**
 * set_bit - sets the value of a bit to 1
 * @n: pointer number of 1
 * @index: the index of number starting from 0
 *
 * Return: 1 for success and -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	i = 1 << index;
	*n = *n | i;

	return (1);
}
