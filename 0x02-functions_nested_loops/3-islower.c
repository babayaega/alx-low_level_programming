#include "main.h"

/**
 * _islower - checks if a letter is a lowercase
 *@c: character to be tested
 *Return: 1 for lowercase, 0 for otherwise
 */

int _islower(int c)
{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}
	else
		return (0);
}

