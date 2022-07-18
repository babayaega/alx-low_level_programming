#include "main.h"

/**
 * _memcpy - a function that copies a memory area
 * @dest: where copied area should be stored
 * @dest: area to copy from
 * @n: number of bytes to copy
 * Return: address of destination copy area
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = 0;

	while (n > 0)
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
		n--;
	}
	return (dest);
}
