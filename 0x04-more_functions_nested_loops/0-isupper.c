#include <stdio.h>
#include "main.h"

/**
 * _isupper - function checks if character is uppercase
 * @c: input text function parameter
 * Return: exit status of the program
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
