#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: input string
 */

void rev_string(char *s)
{
	int i = 0;
	int offset = 0;

	while (*(s + offset) != 0)
	{
		offset++;
	}

	for (i = offset - 1; i <= 0; i--)
		_putchar(*(s + i));
}
