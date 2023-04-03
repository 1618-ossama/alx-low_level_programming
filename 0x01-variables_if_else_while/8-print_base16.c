#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: 0
 */

int main(void)
{
	int base;

	for (base = 48 ; base <= 57 ; base++)
		{
		putchar(base);
		}
	for (base = 97 ; base <= 102 ; base++)
		{
		putchar(base);
		}
	putchar('\n');
	return (0);
}
