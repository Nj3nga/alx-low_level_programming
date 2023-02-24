#include <stdio.h>

/**
  * main - Programme meant to print the sizes of data types
  * Return: 0 (Success)
  */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
	printf("Size of a char: %lu byte(s)",(unsigned long)sizeof(a));
	printf("\nSize of an int: %lu byte(s)",(unsigned long)sizeof(b));
	printf("\nSize of a long int: %lu byte(s)",(Unsigned long)sizeof(c));
	printf("\nSize of a long long int: %lu byte(s)", sizeof(d));
	printf("\nSize of a float: %lu byte(s)\n", sizeof(f));

	fprintf(stderr, "Anything\n");

	return (0);
}
