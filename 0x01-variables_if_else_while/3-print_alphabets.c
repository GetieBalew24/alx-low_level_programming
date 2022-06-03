#include <stdio.h>

/**
*  main - Prints the alphabetic in lower and upper case
*
*  Return: Always (Success)
*/

int main(void)
{
char chars;
for (chars = 'a'; chars <= 'z'; chars++)
{
putchar(chars);
}
for (chars = 'A'; chars <= 'Z'; chars++)
{
putchar(chars);
}
putchar('\n');
return (0);

}
