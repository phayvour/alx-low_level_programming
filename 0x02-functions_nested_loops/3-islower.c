#include "main.h"

/**
 * _islower - checks for lower case characters
 *
 * @c: character to be tested
 *
 * Return: 1 if lower case, otherwise return 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
