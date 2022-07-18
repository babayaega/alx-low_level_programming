#include "main.h"

/**
 * _memset - a function that fills n blocks of memory with a specific value
 * @s: starting memory address
 * @b: value to fill memory blocks with
 * @n: number of bytes to fill
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
		n--;
	}
	return (s);
}
