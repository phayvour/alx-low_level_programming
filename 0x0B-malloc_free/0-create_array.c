#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of char
 * @size: size to be allocated
 * @c: character to initialize array
 *
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = (char *)(malloc(sizeof(char) * size));

	if (array == NULL)
		return (NULL);

	i = 0;

	while (i < size)
	{
		array[i] = c;
		i++;
	}
	return (array);
}
