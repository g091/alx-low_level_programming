#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "search_algos.h"

/**
* linear_search - searches for a value in an array of integers
* @array: pointer to the 1st element
* @size: the no. of elements in array
* @value: value to search for
* Return: 1st index where value is located else -1
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
