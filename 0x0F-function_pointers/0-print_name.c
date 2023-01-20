#include <stddef.h>
#include "function_pointers.h"

/**
 * print_name - prints name in lower and uppercase
 * @name: pointer to name
 * @f: pointer to function
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
