#include <stdio.h>

/**
 * main - main entry point of the program
 * Return: exit status of the program
 */

int main(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
		putchar(num);

	for (num = 'a'; num <= 'f'; num++)
		putchar(num);

	putchar('\n');

	return (0);
}

