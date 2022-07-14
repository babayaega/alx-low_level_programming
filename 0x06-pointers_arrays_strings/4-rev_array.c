#include "main.h"

/**
 * reverse_array - reverse a given array of integers
 * @a: pointer to input array
 * @n: the size of the array
 * Return: function returns nothing
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int tmp;

	for ( ; i < n--; i++)
	{
		tmp = *(a + i);
		*(a + i) = *(a + n);
		*(a + n) = tmp;
	}
}

