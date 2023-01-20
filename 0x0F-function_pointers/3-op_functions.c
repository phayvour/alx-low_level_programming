#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - performs addition operation
 * @a: variable 1
 * @b: variable 2
 * Return: the value
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - performs subtraction operation
 * @a: variable 1
 * @b: variable 2
 * Return: the value
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - performs multiplication operation
 * @a: variable 1
 * @b: variable 2
 * Return: the value
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - performs division operation
 * @a: variable 1
 * @b: variable 2
 * Return: the value
 */
int op_div(int a, int b)
{
	if (b == a)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - performs modulus operation
 * @a: variable 1
 * @b: variable 2
 * Return: the value
 */
int op_mod(int a, int b)
{
	if (b == a)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
