#include "main.h"

/**
 * print_diagonal - entry point
 * Description: Prints diagonals
 * @n: number of spaces
 * Return: void
 */

void print_diagonal(int n)
{
	int row, num_line;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (row = 1; row <= n; row++)
		{
			if (row > 1)
			{
				for (num_line = 1; num_line <= row - 1; num_line++)
				{
				_putchar(' ');
				}
			_putchar('\\');
			_putchar('\n');

			}
		}
	}
}
