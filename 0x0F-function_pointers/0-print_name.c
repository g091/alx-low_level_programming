#include "main.h"
#include <stdlib.h>

/**
 * print_name - prints a name
 * @name: string to be printed
 * @f: pointer to function
 *
 * Return: function to pointer to print name
 */

void print_name(char *name, void (*f)(char *))
{
	if (f)
	{
		(*f)(name);
	}
}
