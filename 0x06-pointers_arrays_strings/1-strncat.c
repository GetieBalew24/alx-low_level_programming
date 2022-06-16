#include "main.h"
#include <string.h>

/**
 * _strncat function that concatenates two strings.
 * @dest: pointer destination
 * @src: pointer source
 * @n: number of bytes
 * Return: void
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int a = 0;

	while (a < n && *src)
	{
		dest[len + a] = *src;
		src++;
		a++;
	}
	dest[len + a] = '\0';
	return (dest);
}
