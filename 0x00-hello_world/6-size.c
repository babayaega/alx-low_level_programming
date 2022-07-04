#include <stdio.h>
/**
 * main - main entry point of the program
 * Return: exit value of the program
 */

int main(void)
{
	char characterTest;
	int integerTest;
	long longintTest;
	long long longlongTest;
	float floatTest;

	printf("Size of a char: %u byte(s)\n", sizeof(characterTest));
	printf("Size of an int: %u byte(s)\n", sizeof(integerTest));
	printf("Size of a long int: %u byte(s)\n", sizeof(longintTest));
	printf("Size of a long long int: %u byte(s)\n", sizeof(longlongTest));
	printf("Size of a float: %u byte(s)\n", sizeof(floatTest));

	return (0);
}
