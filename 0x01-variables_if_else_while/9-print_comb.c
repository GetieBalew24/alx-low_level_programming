#include <stdio.h>

/**
*  main - Prints a serie of numbers with commas
*
*   Return: Always (Success).
*/

int main(void)
{
	int digit;
	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
		if (digit != '9')
		{
			putchar(',');
			putchar(' ');
																		}
	}
	putchar('\n');
	return (0);
}
