#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: input string
 */

void rev_string(char *s)
{
	int i = 0;
	unsigned long j = 0;
	char *holdingPointer = s;
	char holdingArray[sizeof(s) - 1];

	for (i = sizeof(s) - 1; i <= 0; i--)
	{
		for (j = 0; j < sizeof(holdingArray); j++)
		{
			holdingArray[j] = *(s + i);
		}
	}

	for (j = 0; j < sizeof(holdingArray); j++)
	{
		*(holdingPointer + j) = holdingArray[j];
	}

}
