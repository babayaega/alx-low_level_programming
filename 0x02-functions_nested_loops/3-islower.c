#include "main.h"

/**
 * _islower - checks if a letter is a lowercase
 *
 */

int _islower(int c)
{
	if ( c > 'a' && c < 'z' )
	{
		return (1);
	}
	else
		return (0);
}

