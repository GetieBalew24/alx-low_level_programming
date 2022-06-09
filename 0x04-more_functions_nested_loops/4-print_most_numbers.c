#include "main.h"

/**
 * print_most_numbers - entry point
 *
 * Description: Prints the numbers with _putchar
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int number = '0';
	while (number <= '9')
	{
		if (number == '2' || number == '4')
			;
		else
			_putchar(number);
		number++;
	}
	_putchar('\n');
}
