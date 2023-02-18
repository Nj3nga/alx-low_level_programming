#include <stdio.h>

/**
  * main - Programme meant to print the sizes of data types
  * Return: 0 (Success)
  */

int main(void)
{
	printf("Size of a char: %lu byte(s)", sizeof(char));
	printf("\nSize of an int: %lu byte(s)", sizeof(int));
	printf("\nSize of a long int: %lu byte(s)", sizeof(long int));
	printf("\nSize of a long long int: %lu byte(s)", sizeof(long long int));
	printf("\nSize of a float: %lu byte(s)\n", sizeof(float));

	fprintf(stderr, "Anything\n");

	return (0);
}
