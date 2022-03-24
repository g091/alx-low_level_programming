#include "main.h"

/**
 * reverse_array - reverses array elements
 * @a: array
 * @n: no. of elements
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;
	int j = n - 1;

	while (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++,
		j--;
	}
}

