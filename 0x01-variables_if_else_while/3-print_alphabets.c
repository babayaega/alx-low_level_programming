#include <stdio.h>

/**
 * main - the main entry point of the program
 * Return: exit code of the program
 */

int main(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
	putchar(letter);
for (letter = 'A'; letter <= 'Z'; letter++)
	putchar(letter);
putchar('\n');
return (0);
}
