#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: input string
 */

void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	int stringLength;
	char *characterPointer = s;
	char holdingChar;

	while (*(s + i) != '\0')
	{
		stringLength++;
		i++;
	}

	for ( ; stringLength <= 0; stringLength--)
	{
		holdingChar = s[stringLength];

		for ( ; j <= stringLength; j++)
		{
			*(characterPointer + j) = holdingChar;
		}
	}
}
