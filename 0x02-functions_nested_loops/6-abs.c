#include "main.h"

/**
 * _abs - prints the absolute value of any number
 *
 * @a: character to be tested
 *
 * Return: 1 if lower case, otherwise return 0
 */

int _abs(int a)
{
	if (a < 0)
		a *= -1;
	return (a);
}
