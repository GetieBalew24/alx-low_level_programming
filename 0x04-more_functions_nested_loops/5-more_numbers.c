#include "main.h"

/**
 * more_numbers - entry point
 *
 * Description: Prints the numbers with _putchar
 *
 * Return: void
 */

void more_numbers(void)
{
	int row, num, div, mod;

	for (row = 0; row < 10; row++)
	{
		for (num = 0; num <= 14; num++)
		{
			div = num / 10;
			mod = num % 10;
			if (num > 9)
			{
			_putchar(div + '0');
			}
			_putchar(mod + '0');
		}
		_putchar('\n');
	}
}
