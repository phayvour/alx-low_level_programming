#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new malloc
 * and contains a copy of the string
 * @str: the string to be copied
 *
 * Return: a pointer to the new malloc
 */
char *_strdup(char *str)
{
	int i, size;
	char *ptr;

	if (str == NULL)
		return (NULL);

	for (size = 0; str[size] != '\0'; size++)
		;

	ptr = (char *)(malloc(sizeof(char) * (size - 1)));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		ptr[i] = str[i];
	ptr[i] = '\0';

	return (ptr);

}
