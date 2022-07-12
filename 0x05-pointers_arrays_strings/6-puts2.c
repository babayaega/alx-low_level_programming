#include "main.h"

void puts2(char *str)
{
	int counter = 0;

	while( *(str + counter) != '\0')
	{
		if((counter % 2) == 0)
			_putchar(*(str + counter));
		else
			continue;
		counter++;
	}
	_putchar('\n');
}
