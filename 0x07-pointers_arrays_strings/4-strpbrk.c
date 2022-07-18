#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - function locates the first occurrence in the string s of a
 * ny of the bytes in the string accept
 * @s: input string
 * @accept: number of bytes of subset to accept
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}
	return (NULL);
}
