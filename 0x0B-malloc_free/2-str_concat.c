#include "main.h"
#include <stdlib.h>
/**
 * *str_concat - concatenates two strings
 * @s1: input string 1
 * @s2: input string 2
 * Return: pointer to starting address of newly allocated space or null
 **/
char *str_concat(char *s1, char *s2)
{
	char *strCopy;
	int i;
	int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	j = 0;

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	strCopy = malloc(sizeof(char) * (i + j + 1));
	if (strCopy == NULL)
		return (NULL);
	i = 0;
	j = 0;

	while (s1[i] != '\0')
	{
		strCopy[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		strCopy[i] = s2[j];
		i++, j++;
	}
	strCopy[i] = '\0';
	return (strCopy);
}
