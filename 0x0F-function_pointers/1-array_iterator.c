#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function
 * as a given parameter on each elemnt of an array
 * @array: pointer to an array
 * @size: size of the array
 * @action: pointer to a function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (action == NULL || array == NULL)
		return;

	for (; i < size; i++)
		action(array[i]);
}
