#include "main.h"
#include <stdio.h>
/**
 * rev_string - function that reverses a string
 * @s: input string
 */

void rev_string(char *s)
{
	int tempIndex;
	int i = 0;
	int k;
	int stringLength = 0;
	char holdingCharacter;
	char *characterPointer = s;
	int newLength;

	while (*(s + i) != '\0')
	{
		stringLength++;
		i++;
	}

	newLength = stringLength - 1;

	for (k = 0; k < ((newLength / 2) + 1); k++)
	{
		tempIndex = (newLength - k);
		holdingCharacter = *(characterPointer + k);
		*(characterPointer + k) = *(characterPointer + tempIndex);
		*(characterPointer + tempIndex) = holdingCharacter;
	}
}
