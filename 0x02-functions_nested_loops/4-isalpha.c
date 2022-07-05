#include "main.h"

/**
 * _isalpha - checks if a character is an aplhabet
 * Return: returns 1 for letter, 0 otherwise
 * @c: The character to be tested
 **/

int _isalpha(int c)
{
	if (c > 'A' && c < 'Z')
	{
		if (c > 'a' && c < 'z')
			return (1);
	}
	else
		return (0);
}
