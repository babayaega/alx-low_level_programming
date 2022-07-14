#include "main.h"

/**
 * _strcmp - function that compares two strings if they are the same
 * @s1: first input string
 * @s2: second input string
 * Return: returns an integer that gives the difference between two strings
 * 0 if both strings are the same
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*(s1 + i) != '\0' && *(s2 + i) != '\0')
	{
		if (*(s1 + i) != *(s2 + i))
			return (*(s1 + i) - *(s2 + i));
		i++;
	}
	return (0);
}
