#include "main.h"

/**
 * _strlen - function that calculates the length of a string
 * @s: pointer to charac array of the string
 * Return: length of the string
 */

int _strlen(char *s)
{
	int offset = 0;

	while (True)
	{
		if (*(s + offset) != 0)
			offset++;
		else if (*(s + offset) == 0)
			break;
	}

	Return(offset - 1);
}
