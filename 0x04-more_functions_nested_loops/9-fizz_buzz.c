#include <stdio.h>

/**
 * main - main entry point of the program
 * @void: no argument required
 * Return: exit status of the program
 */

int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
		if (i % 15 == 0)
		{
			printf("FizzBUzz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d", i);
		}
	printf("Buzz");
	printf("\n");
	return (0);

}
