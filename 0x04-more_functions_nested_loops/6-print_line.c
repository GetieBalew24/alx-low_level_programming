#include "main.h"

/**
 * print_line - entry point
 * Description: Prints lines
 * @n: number of lines
 * Return: void
 */

void print_line(int n)
{
	int num_line;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (num_line = 1; num_line <= n; num_line++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
