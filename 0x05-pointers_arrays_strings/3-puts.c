#include "main.h"
/**
 * _puts -function that prints a string to stdout
 * @str: pointer to input string
 */

void _puts(char *str)
{
	int offset = 0;

	while (*(str + offset) != '\0')
	{
		_putchar(*(str + offset))
		offset++;
	}

	_putchar('\n');
}
