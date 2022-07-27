#include "main.h"
#include <stdlib.h>

/**
 * *argstostr - function that concatenates all input arguements
 * @ac: input number of arguments
 * @av: input arguments
 * Return: character pointer
 **/

char *argstostr(int ac, char **av)
{
	char *strCopy;
	int i;
	int j;
	int k;
	int size;

	if (ac == 0 || av == NULL)
		return (NULL);
	size = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			size++;
		size++;
	}
	size++;

	strCopy = malloc(sizeof(char) * size);
	if (strCopy == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			strCopy[k++] = av[i][j];
		}
		strCopy[k++] = '\n';
	}
	strCopy[k] = '\0';
	return (strCopy);
}
