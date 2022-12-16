#include "main.h"

/**
 * _isupper - checks for uppercase letters
 *
 * @c: character to be tested
 *
 * Return: 1 if uppercase and 0 otherwise
 */
int _isupper(int c)
{
	int s = 'A', e = 'Z';

	if (c >= s && c <= e)
		return (1);
	return (0);
}
