#include <stdio.h>

/**
 * main - main entry point of the program
 * Return: exit code of the program
 */

int main(void)
{
	int tenners, singles;

		for (tenners = 0; tenners <= 9; tenners++)
		{
			for (singles = 0; singles <= 9; singles++)
			{
				putchar(tenners + '0');
				putchar(singles + '0');

				if (!(tenners == 9 && singles == 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}

	putchar('\n');

	return (0);
}
