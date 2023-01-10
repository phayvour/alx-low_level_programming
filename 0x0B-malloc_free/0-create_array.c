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
	char *ar;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ar = (char *)(malloc(sizeof(char) * size));

	if (ar == NULL)
		return (NULL);

	while (i < size)
	{
		ar[i] = c;
		i++;
	}
	return (ar);
}
