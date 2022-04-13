#include <stdlib.h>
#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a fxn given as a parameter
 * @array: pointer to an array
 * @size: size of array
 * @action: pointer to function
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t s;

	if (array != NULL && action != NULL)
	{
		for (s = 0 ; s < size ; s++)
			(*action)(array[s]);
	}
}
