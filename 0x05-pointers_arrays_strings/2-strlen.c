#include "main.h"

/**
 * _strlen - function that calculates the length of a string
 * @s: pointer to charac array of the string
 * Return: length of the string
 */

int _strlen(char *s)
{
	int offset = 0;
	int checker = 0;

	while (checker == 0)
	{
		if (*(s + offset) != 0)
			offset++;
		else if (*(s + offset) == 0)
			checker = 1;
			break;
	}

	Return(offset - 1);
}
