#include <stdlib.h>

/**
 * int_index - searches for an integer
 * @array: pointer to an array
 * @size: size of the array
 * @cmp: pointer to the function
 * Return: returns the index of the first element which the function cmp
 * does not return 0, and -1 if no element matches or if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (cmp == NULL || array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (; i < size; i++)
		if (cmp(array[i]))
			return (i);
	if (i == size)
		return (-1);
	return (-1);
}
