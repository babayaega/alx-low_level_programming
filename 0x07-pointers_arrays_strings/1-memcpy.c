#include "main.h"
#include <stdio.h>
/**
 * *_memcpy - a function that copies a memory area
 * @dest: where copied area should be stored
 * @src: area to copy from
 * @n: number of bytes to copy
 * Return: address of destination copy area
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	return (dest);
}
