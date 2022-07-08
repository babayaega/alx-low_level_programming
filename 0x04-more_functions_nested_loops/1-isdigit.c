#include "main.h"

/**
 * _isdigit - checks if a given input is a digit
 * @c: input parameter to the above named function
 * Return: exit status of the program
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	return (1);
	return (0);
}
