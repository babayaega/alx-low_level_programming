#include "main.h"

/**
 * _memset - a function that fills n blocks of memory with a specific value
 * @s: starting memory address
 * @b: value to fill memory blocks with
 * @n: number of bytes to fill
 * Return: number of bytes of memory from starting address to change
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		*(s + i) = b;
		i++;
		n--;
	}
	return (s);
}
