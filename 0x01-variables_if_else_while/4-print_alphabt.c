#include <stdio.h>

/**
*	main - Prints some letters of alphabet
*
*	Return: Always (Success)
*/

int main(void)
{
	char chars;
	for(chars ='a'; chars <='z'; chars++)
	{
		if(chars !='e' && chars !='q')
			putchar(chars);
	}
	putchar('\n');
	return (0);
}
