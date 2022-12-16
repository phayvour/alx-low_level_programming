#include "main.h"

/**
 * _isdigit - cheecks if the character is between 0 and 9
 * @c: character to be tested
 * Return: 1 if successful, otherwise 0
 */
int _isdigit(int c)
{
	int s = '0', e = '9';

	if (c >= s && c <= e)
		return (1);
	return (0);
}
