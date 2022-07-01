#include <stdio.h>

/**
 * main - main entry point of the program
 * Return: exit code of the program
*/

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar(num + '0');
	putchar('\n');
	return (0);
}
