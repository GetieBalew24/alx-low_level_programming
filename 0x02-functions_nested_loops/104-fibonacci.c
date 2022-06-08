#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, starting with
 *  1 and 2, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int f1 = 0, f2 = 1, i;

	printf("%lu, ", f1);
	for (i = 1; i < 98; i++)
	{
		printf("%lu, ", f2); 

		int next = f1 + f2;

		f1 = f2;
		f2 = next;
	}
	return (0);
}
