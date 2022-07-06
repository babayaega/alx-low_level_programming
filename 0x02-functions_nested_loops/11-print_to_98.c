#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - a function that prints from 0 - 98
 * @n: function parameter
 * Return: exit status of the program
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	else if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	printf("%d\n", n);
}
