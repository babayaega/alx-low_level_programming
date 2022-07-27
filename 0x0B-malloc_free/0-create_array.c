#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars, initialized with a specific one
 * @size: input size of the array
 * @c: initializing character
 * Return: return value of function. array pointer or null
 **/

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
		return (NULL);
	str = malloc(sizeof(char) * size);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	return (str);
}