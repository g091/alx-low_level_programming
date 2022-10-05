#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: pointer to the 1st element of the array to search in
 * @size: the no. of elements in array
 * @value: value to search for
 * Return: location where value is located else -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i;
	size_t lt;
	size_t rt;

	if (array == NULL)
	{
		return (-1);
	}

	for (lt = 0, rt = size - 1; rt >= lt;)
	{
		printf("Searching in array: ");
		for (i = lt; i < rt; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);

		i = lt + (rt - lt) / 2;

		if (array[i] == value)
		{
			return (i);
		}
		if (array[i] > value)
		{
			rt = i - 1;
		}
		else
		{
			lt = i + 1;
		}

	}
	return (-1);
}
