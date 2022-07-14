#include "main.h"

/**
 * _strncat - a function that concatenates two strings, copying only
 * n bytes from the source string
 * @dest: resulting string
 * @src: string to be copied
 *@n: number of bytes to be copied from source string
 * Return: pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{

	int i = 0;
	int j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	while (*(src + j) != '\0' && j < n)
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}

	*(dest + i) = '\0';
	return (dest);

}
