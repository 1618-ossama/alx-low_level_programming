#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers.
 *
 * Return: 0
 */

int main(void)
{
	int a = 48;
	while (a <= 57)
	{
		if (a<57)
		{
		putchar(a);
		putchar(',');
		putchar(' ');
		a++;
		}
		else 
		{
		putchar(a);
		a++;
		}
	}
	putchar('\n');
	return (0);
}
