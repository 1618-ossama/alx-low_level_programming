#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: write the size of different data types
 *
 * Return: 0 mean success
 */

int main(void)
{
	int var1;
	char var2;
	long int var3;
	long long int var4;
	float var5;

	printf("Size of a char: %lu byte(s)", sizeof(var2));
	printf("Size of an int: %lu byte(s)", sizeof(var1));
	printf("Size of a long int: %lu byte(s)", sizeof(var3));
	printf("Size of a long long int: %lu byte(s)", sizeof(var4));
	printf("Size of a float: %lu byte(s)", sizeof(var5));
	return (0);
}
