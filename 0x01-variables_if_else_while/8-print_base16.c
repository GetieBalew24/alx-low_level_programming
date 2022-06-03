#include <stdio.h>

/**
*  main - Prints a hexadecimal string
*
*  Return: Always (Success)
*/

int main(void)
{
	char str;
	for (str = '0'; str <= '9'; str++)
	{
		putchar(str);
	}
	for (str = 'a'; str <= 'f'; str++)
	{
		putchar(str);
	}
	putchar('\n');
	return (0);
}
