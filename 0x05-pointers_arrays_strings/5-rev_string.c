#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: input string
 */

void rev_string(char *s)
{
	int offset = 0;

	while (*(s + offset) != 0)
	{
		offset++;
	}

	for (offset = offset - 1; offset <= 0; offset--)
		_putchar(*(s + offset));
}
