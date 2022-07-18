#include "main.h"
#include <stddef.h>

/**
 * _strchr - function that locates a character in a string
 * @s: the string to be searched
 * @c: the character being searched for

 * Return: a pointer to the character found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	return (0);
}
