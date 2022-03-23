#include "main.h"
#include <string.h>
/**
 * char *_strcat - concatenates 2 strings
 * @src: source string
 * @dest: destination string
 * Return: concatenated string with pointer value
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}

