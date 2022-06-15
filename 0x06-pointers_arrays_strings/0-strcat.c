#include "main.h"

/**
 * a function that concatenates two strings.
 * @dest: pointer destination
 * @src: pointer source
 */

char *_strcat(char *dest, char *src)
{
	int n = -1, i;

	for (i = 0; dest[i] != '\0'; i++)
	{
		;
	}

	do
	{
		n++;
		dest[i] = src[n];
		i++;
	}while (src[n] != '\0');

	return (dest);
}
