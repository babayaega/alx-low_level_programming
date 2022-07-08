#include "main.h"

/**
 * print_line - a functions that prints a straight line
 * @n: how many '_'s to make up the line
 */

void print_line(int n)
{
	char c;

	for (c = 0; c < n; c++)
		_putchar('_');
	_putchar('\n');
}
