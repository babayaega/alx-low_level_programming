#include "main.h"

/**
 * print_alphabet - a function that prints the letters of the alphabet
 *
 * Return: the exit status of the program.
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
