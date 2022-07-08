#include <stdio.h>

/**
 * main - entry point of the program
 * @void: no argument required for the function
 * Return: exit status of the program
 */

int main(void)
{
	long i, number = 612852475143;

	for (i = 2; i <= number; i++)
	{
		if (number % i == 0)
		{
			number = number / i;
			i--;
		}
	}
	printf("%lu\n", i);
	return (0);
}
