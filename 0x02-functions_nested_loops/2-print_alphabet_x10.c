#include "main.h"

/**
 * print_alphabet_x10 - prints letters of the alphabet x 10
 *
 * Return: the exit status of the program.
 */

void print_alphabet_x10(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
