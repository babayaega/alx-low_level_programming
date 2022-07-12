#include "main.h"

/**
 * print_rev - function that prints string in reverse followed by a new line
 * @s: input string
 */

void print_rev(char *s)
{
	int i = 0;
	int offset = 0;

	while (*(s + offset) != '\0')
		offset++;


	for (i = offset; i > 0; i--)
		_putchar(*(s + i));

	_putchar('\n');
}
