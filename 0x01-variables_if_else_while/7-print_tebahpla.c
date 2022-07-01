#include <stdio.h>

/**
 * main - main entry point of the program
 * Return: exit status of the program
 */

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}
