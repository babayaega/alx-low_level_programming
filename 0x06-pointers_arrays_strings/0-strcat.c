#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * @dest: resulting string
 * @src: string to be copied
 * Return: pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{

	int i = 0;
	int j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	while (*(src + j) != '\0')
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}

	*(dest + i) = '\0';
	return (dest);

}
