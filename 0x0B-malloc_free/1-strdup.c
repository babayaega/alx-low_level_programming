#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - returns pointer to allocated memory address of duplicate of str
 * @str: input string
 * Return: pointer starting mem address of copied string or null
 **/

char *_strdup(char *str)
{
	char *strCopy;
	int i;
	int j;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	i++;
	strCopy = malloc(sizeof(*str) * i);
	if (strCopy == NULL)
		return (NULL);
	j = 0;
	while (str[j] != '\0')
	{
		strCopy[j] = str[j];
		j++;
	}
	return (strCopy);
}
