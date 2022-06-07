#include "main.h"
/*
 *  main-entry point
 *
 *  return always zero
 */

int main(void)
{
	char *str;

	for (str = "_putchar\n"; *str != '\0'; ++str)
		_putchar(*str);
	return (0);
}
